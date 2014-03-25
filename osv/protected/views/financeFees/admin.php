<?php
$this->breadcrumbs=array(
	'Finance Fees'=>array('index'),
	'Manage',
);

$this->menu=array(
	array('label'=>'List FinanceFees', 'url'=>array('index')),
	array('label'=>'Create FinanceFees', 'url'=>array('create')),
);

Yii::app()->clientScript->registerScript('search', "
$('.search-button').click(function(){
	$('.search-form').toggle();
	return false;
});
$('.search-form form').submit(function(){
	$.fn.yiiGridView.update('finance-fees-grid', {
		data: $(this).serialize()
	});
	return false;
});
");
?>

<h1>Manage Finance Fees</h1>

<p>
You may optionally enter a comparison operator (<b>&lt;</b>, <b>&lt;=</b>, <b>&gt;</b>, <b>&gt;=</b>, <b>&lt;&gt;</b>
or <b>=</b>) at the beginning of each of your search values to specify how the comparison should be done.
</p>

<?php echo CHtml::link('Advanced Search','#',array('class'=>'search-button')); ?>
<div class="search-form" style="display:none">
<?php $this->renderPartial('_search',array(
	'model'=>$model,
)); ?>
</div><!-- search-form -->

<?php $this->widget('zii.widgets.grid.CGridView', array(
	'id'=>'finance-fees-grid',
	'dataProvider'=>$model->search(),
	'filter'=>$model,
	'columns'=>array(
		'id',
		'fee_collection_id',
		'transaction_id',
		'student_id',
		'is_paid',
		array(
			'class'=>'CButtonColumn',
		),
	),
)); ?>
