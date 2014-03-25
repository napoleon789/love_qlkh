<div class="form">

<?php $form=$this->beginWidget('CActiveForm', array(
	'id'=>'employee-attendances-form',
	'enableAjaxValidation'=>true,
)); ?>

	<p class="note">Fields with <span class="required">*</span> are required.</p>

	<?php echo $form->errorSummary($model); ?>

	<div class="row">
		<?php //echo $form->labelEx($model,'attendance_date'); ?>
		<?php echo $form->hiddenField($model,'attendance_date',array('value'=>$year.'-'.$month.'-'.$day));?>
		<?php echo $form->error($model,'attendance_date'); ?>
	</div>

	<div class="row">
		<?php //echo $form->labelEx($model,'employee_id'); ?>
		<?php echo $form->hiddenField($model,'employee_id',array('value'=>$emp_id)); ?>
		<?php echo $form->error($model,'employee_id'); ?>
	</div>

	<div class="row">
		<?php echo $form->labelEx($model,'employee_leave_type_id'); ?>
		<?php //echo $form->textField($model,'employee_leave_type_id'); ?>
        <?php echo $form->dropDownList($model,'employee_leave_type_id',CHtml::listData(EmployeeLeaveTypes::model()->findAll(), 'id', 'name'),array('empty'=>'select Type')); ?>
		<?php echo $form->error($model,'employee_leave_type_id'); ?>
	</div>

	<div class="row">
		<?php echo $form->labelEx($model,'reason'); ?>
		<?php echo $form->textField($model,'reason',array('size'=>30,'maxlength'=>255)); ?>
		<?php echo $form->error($model,'reason'); ?>
	</div>

	<div class="row">
		<?php echo $form->labelEx($model,'is_half_day'); ?>
		<?php echo $form->checkBox($model,'is_half_day'); ?>
		<?php echo $form->error($model,'is_half_day'); ?>
	</div>

	<div class="row buttons">
		<?php //echo CHtml::submitButton($model->isNewRecord ? 'Create' : 'Save'); ?>
        <?php echo CHtml::ajaxSubmitButton(Yii::t('job','Save'),CHtml::normalizeUrl(array('EmployeeAttendances/Addnew','render'=>false)),array('success'=>'js: function(data) {
						$("#td'.$day.$emp_id.'").text("");
						$("#jobDialog123'.$day.$emp_id.'").html("<span class=\"abs\"></span>","");
						$("#jobDialog'.$day.$emp_id.'").dialog("close");
                    }'),array('id'=>'closeJobDialog'.$day.$emp_id,'name'=>'save')); ?>
	</div>

<?php $this->endWidget(); ?>

</div><!-- form -->