<table width="100%" border="0" cellspacing="0" cellpadding="0">
  <tr>
    <td width="247" valign="top">
    <div style="font-size:14px; padding:10px 0 0 10px;"><strong>Search</strong></div>
    <div class="searchbx" style="padding:0px; margin:10px 0 0 10px;">
				 <form action="<?php echo $this->createUrl('/site/search'); ?>" name="search" method="post">
                 <table width="100" border="0" cellspacing="0" cellpadding="0">
  <tr>
    <td><input class="searchbar" name="char" type="text" /></td>
    <td> <input src="images/search.png" type="image" name="555" value="submit" /></td>
  </tr>
</table>

                	
                  </form>  
                </div>
    
    </td>
    <td valign="top">
    <table width="100%" border="0" cellspacing="0" cellpadding="0">
      <tr>
        <td valign="top" width="75%">
        <div class="cont_right formWrapper">
          <h1>Search Result</h1><br /><br />
          <div class="formCon" style="width:100%">
            	<div class="formConInner">
                	<h3>Students</h3>
                    <div class="tableinnerlist">
<table width="100%" cellpadding="0" cellspacing="0">
<tr>
<th width="50%">Name</th>
<th>Batch</th>
</tr>
<?php
if(count($list)!=0)
{
	foreach($list as $list_1)
	{ ?>
	<tr>
	<td width="50%"><?php echo CHtml::link($list_1->first_name.'  '.$list_1->middle_name.'  '.$list_1->last_name,array('students/students/view','id'=>$list_1->id)) ?></td>	
	<td><?php
	$batch=Batches::model()->findByAttributes(array('id'=>$list_1->batch_id));
	 echo $batch->name; ?></td>	
	<tr>
	<?php }
}
else
{
	echo '<tr>';
	echo '<td colspan="2">No Data found</td>';   
	echo '</tr>';
}
?>
</table>
</div>
<h3>Employees</h3>
<div class="tableinnerlist">
<table width="100%" cellpadding="0" cellspacing="0">
<tr>
<th width="50%">Name</th>
<th>Department</th>
</tr>
<?php
if(count($posts)!=0)
{
	foreach($posts as $posts_1)
	{ ?>
	<tr>
	<td width="50%"><?php echo CHtml::link($posts_1->first_name.'  '.$posts_1->middle_name.'  '.$posts_1->last_name,array('employees/employees/view','id'=>$posts_1->id)) ?></td>
    <td><?php
	$dept=EmployeeDepartments::model()->findByAttributes(array('id'=>$posts_1->employee_department_id));
	if($dept!=NULL)
	{
	 echo $dept->name;
	}
	else{ echo ' - ';}?>
     </td>		
	<tr>
	<?php }
}
else
{
	echo '<tr>';
	echo '<td colspan="2">No Data found</td>';   
	echo '</tr>';
}
?>
</table> </div>
                </div>
           </div>
        </div>
      