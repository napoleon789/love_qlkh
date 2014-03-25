<?php

class BatchesController extends RController
{
	/**
	 * @var string the default layout for the views. Defaults to '//layouts/column2', meaning
	 * using two-column layout. See 'protected/views/layouts/column2.php'.
	 */
	public $layout='//layouts/column2';

	/**
	 * @return array action filters
	 */
	public function filters()
	{
		return array(
			'rights', // perform access control for CRUD operations
		);
	}

	/**
	 * Specifies the access control rules.
	 * This method is used by the 'accessControl' filter.
	 * @return array access control rules
	 */
	public function accessRules()
	{
		return array(
			array('allow',  // allow all users to perform 'index' and 'view' actions
				'actions'=>array('index','view','manage','Batchstudents','Addnew','settings','Addupdate','Remove','promote','deactivate','activate'),
				'users'=>array('@'),
			),
			array('allow', // allow authenticated user to perform 'create' and 'update' actions
				'actions'=>array('create','update'),
				'users'=>array('@'),
			),
			array('allow', // allow admin user to perform 'admin' and 'delete' actions
				'actions'=>array('admin','delete'),
				'users'=>array('admin'),
			),
			array('deny',  // deny all users
				'users'=>array('*'),
			),
		);
	}

	/**
	 * Displays a particular model.
	 * @param integer $id the ID of the model to be displayed
	 */
	public function actionView($id)
	{
		$this->render('view',array(
			'model'=>$this->loadModel($id),
		));
	}

	/**
	 * Creates a new model.
	 * If creation is successful, the browser will be redirected to the 'view' page.
	 */
	public function actionCreate()
	{
		$model=new Batches;

		// Uncomment the following line if AJAX validation is needed
		// $this->performAjaxValidation($model);

		if(isset($_POST['Batches']))
		{
			$model->attributes=$_POST['Batches'];
			$model->start_date=date('Y-m-d', strtotime($model->start_date)); 
			$model->end_date=date('Y-m-d', strtotime($model->end_date)); 
			if($model->save())
				$this->redirect(array('view','id'=>$model->id));
		}

		$this->render('create',array(
			'model'=>$model,
		));
	}

	/**
	 * Updates a particular model.
	 * If update is successful, the browser will be redirected to the 'view' page.
	 * @param integer $id the ID of the model to be updated
	 */
	public function actionUpdate($id)
	{
		$model=$this->loadModel($id);

		// Uncomment the following line if AJAX validation is needed
		// $this->performAjaxValidation($model);

		if(isset($_POST['Batches']))
		{
			$model->attributes=$_POST['Batches'];
			$model->start_date=date('Y-m-d', strtotime($model->start_date)); 
			$model->end_date=date('Y-m-d', strtotime($model->end_date)); 
			if($model->save())
				$this->redirect(array('view','id'=>$model->id));
		}

		$this->render('update',array(
			'model'=>$model,
		));
	}
	public function actionManage() 
	{                                    
		 
		 $this->render('manage'); 
	}
	public function actionBatchstudents() 
	{                                    
		 
		 $this->render('batchstudents'); 
	}
	public function actionPromote() 
	{ 
	
	if(isset($_POST['promote']))
	{
		
	     if(isset($_POST['sid']))
         {
			 if(isset($_POST['batch_id']) and $_POST['batch_id']!=NULL)
			 {
				 foreach($_POST['sid'] as $sid)
				 {
					 
					 $Student=Students::model()->findByAttributes(array('id'=>$sid));
					 
					 $Student->saveAttributes(array('batch_id'=>$_POST['batch_id']));
					 
					 Yii::app()->user->setFlash('success', "Promoted All Selected Students To This Batch");
					 
					 $this->redirect(array('batchstudents', 'id' =>$_POST['batch_id']));
				 }
				  
			 }
			 else
			 {
			 Yii::app()->user->setFlash('bid', "Select a batch!");
             $this->redirect(array('promote', 'id' =>$_REQUEST['id']));
			 }
		 }
		 else
		 {
			 if(isset($_POST['batch_id']) and $_POST['batch_id']!=NULL)
			 {
			 Yii::app()->user->setFlash('sid', "Select atleast one student!");
			 }
			 else
			 {
			
			 Yii::app()->user->setFlash('sid', "* Select atleast one student!");
			 Yii::app()->user->setFlash('bid', "* Select a batch!");
			 }
             $this->redirect(array('promote', 'id' =>$_REQUEST['id']));
			 
		 }
	}
		 
		 $this->render('promote'); 
	}
	public function actionSettings() 
	{                                    
		 
		 $this->render('settings'); 
	}
	
	public function actionDeactivate() 
	{  
	
	     $model=Batches::model()->findByPk($_REQUEST['id']);   
		 $model->saveAttributes(array('is_active'=>'0'));                               
		 
		 $this->redirect(array('batchstudents', 'id' =>$_REQUEST['id']));
	}
	public function actionActivate() 
	{  
	
	     $model=Batches::model()->findByPk($_REQUEST['id']);   
		 $model->saveAttributes(array('is_active'=>'1'));                               
		 
		 $this->redirect(array('batchstudents', 'id' =>$_REQUEST['id']));
	}
	public function actionAddnew() {
        //$model=$this->loadModel(3);
			$model=new Batches;
        // Ajax Validation enabled
        //$this->performAjaxValidation($model);
        // Flag to know if we will render the form or try to add 
        // new jon.
		$flag=true;
	   	if(isset($_POST['Submit']))
        {       $flag=false;

            $model->attributes=$_POST['Batches'];
			$model->start_date=date('Y-m-d', strtotime($model->start_date)); 
			$model->end_date=date('Y-m-d', strtotime($model->end_date)); 
            $model->save();
              
                }
                if($flag) {
                    Yii::app()->clientScript->scriptMap['jquery.js'] = false;
                    $this->renderPartial('create',array('model'=>$model,'val1'=>$_GET['val1']),false,true);
                }
        }
		public function actionAddupdate() {
        //$model=$this->loadModel(3);

		
        // Ajax Validation enabled
        //$this->performAjaxValidation($model);
        // Flag to know if we will render the form or try to add 
        // new jon.
		$flag=true;
	   	if(isset($_POST['Batches']))
        {   
			$flag=false;
			$model=Batches::model()->findByPk($_GET['val1']);
			$model->attributes=$_POST['Batches'];
			$model->start_date=date('Y-m-d', strtotime($model->start_date)); 
			$model->end_date=date('Y-m-d', strtotime($model->end_date)); 
			$model->save();
			exit;
                }
                if($flag) {
					$model=Batches::model()->findByPk($_GET['val1']);
                    Yii::app()->clientScript->scriptMap['jquery.js'] = false;
                    $this->renderPartial('update',array('model'=>$model,'val1'=>$_GET['val1'],'course_id'=>$_GET['course_id']),false,true);
                }
        }
		public function actionRemove()
		{
			$val = $_GET['val1'];
			$model=Batches::model()->findByPk($val);
			$model->delete();
			
		}
		
	/**
	 * Deletes a particular model.
	 * If deletion is successful, the browser will be redirected to the 'admin' page.
	 * @param integer $id the ID of the model to be deleted
	 */
	public function actionDelete($id)
	{
		if(Yii::app()->request->isPostRequest)
		{
			// we only allow deletion via POST request
			$this->loadModel($id)->delete();

			// if AJAX request (triggered by deletion via admin grid view), we should not redirect the browser
			if(!isset($_GET['ajax']))
				$this->redirect(isset($_POST['returnUrl']) ? $_POST['returnUrl'] : array('admin'));
		}
		else
			throw new CHttpException(400,'Invalid request. Please do not repeat this request again.');
	}

	/**
	 * Lists all models.
	 */
	public function actionIndex()
	{
		$dataProvider=new CActiveDataProvider('Batches');
		$this->render('index',array(
			'dataProvider'=>$dataProvider,
		));
	}

	/**
	 * Manages all models.
	 */
	public function actionAdmin()
	{
		$model=new Batches('search');
		$model->unsetAttributes();  // clear any default values
		if(isset($_GET['Batches']))
			$model->attributes=$_GET['Batches'];

		$this->render('admin',array(
			'model'=>$model,
		));
	}

	/**
	 * Returns the data model based on the primary key given in the GET variable.
	 * If the data model is not found, an HTTP exception will be raised.
	 * @param integer the ID of the model to be loaded
	 */
	public function loadModel($id)
	{
		$model=Batches::model()->findByPk($id);
		if($model===null)
			throw new CHttpException(404,'The requested page does not exist.');
		return $model;
	}

	/**
	 * Performs the AJAX validation.
	 * @param CModel the model to be validated
	 */
	protected function performAjaxValidation($model)
	{
		if(isset($_POST['ajax']) && $_POST['ajax']==='batches-form')
		{
			echo CActiveForm::validate($model);
			Yii::app()->end();
		}
	}
}
