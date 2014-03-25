<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Open-School Setup</title>
<link rel="stylesheet" href="<?php echo Yii::app()->theme->baseUrl; ?>/styles/reset.css" media="screen" />
<link rel="stylesheet" href="<?php echo Yii::app()->theme->baseUrl; ?>/styles/general.css" media="screen" />
<link rel="stylesheet" href="<?php echo Yii::app()->theme->baseUrl; ?>/styles/form.css" media="screen" />
<link rel="stylesheet" href="<?php echo Yii::app()->theme->baseUrl; ?>/styles/table.css" media="screen" />
<!--[if IE 6]>
<script src="scripts/DD_belatedPNG.js" type="text/javascript"></script>
<![endif]-->
<?php Yii::app()->clientScript->registerCoreScript('jquery'); ?>
<script src="<?php echo Yii::app()->theme->baseUrl; ?>/scripts/extra.js" type="text/javascript"></script>
</head>

<body>
<div id="container">
    <!-- header -->
    <div id="header">
        <h1><a href="<?php echo Yii::app()->getBaseUrl(true);?>">Welcome openschool</a></h1>
        <div class="user">Build : 2.0.1</div>
        
    </div>
    <!-- header.end -->
    
    <!-- main -->
    <div id="main">
        <div class="main-wrapper clearfix">
            <!-- main content -->
            <div class="main-content">
                <?php echo $content;?>
            </div>
            <!-- main content.end -->
            
            <!-- aside -->
            <div class="aside">
           <?php /*$this->widget('zii.widgets.CMenu',array(
            'id'=>'menu',
            'items'=>array(
                array('label'=>'System checks', 'url'=>array('/Install/default/check')),
                array('label'=>'Environment settings', 'url'=>array('/Install/default/environment')),
                array('label'=>'Database setup', 'url'=>array('/Install/default/build')),
                array('label'=>'Administrator account', 'url'=>array('/Install/default/info')),
                array('label'=>'Final step', 'url'=>array('/Install/default/finish')),
            ),
        ));*/ ?>
        <ul id="menu">
        <?php $i=0;?>
        <?php if(Yii::app()->controller->action->id=='step1')
		{?>
        <li class="current"><a href="install.php?r=Install/default/check">System checks<span>1</span></a></li>
		<?php 
		}
		else
        { ?>
        <li class="firstfinish"><a href="install.php?r=Install/default/check">System checks<span>1</span></a></li>
        <?php	
        }
        ?>
        
        
        
        <?php if(Yii::app()->controller->action->id=='step2')
		{?>
        <li class="current"><a href="install.php?r=Install/default/environment">Environment settings<span>2</span></a></li>
        <?php 
		}
		else if(Yii::app()->controller->action->id=='step1')
        { ?>
        <li class=""><a href="install.php?r=Install/default/environment">Environment settings<span>2</span></a></li>
        <?php	
        }
		else
        { ?>
        <li class="finish"><a href="install.php?r=Install/default/environment">Environment settings<span>2</span></a></li>
        <?php	
        }
        ?>
        
        <?php if(Yii::app()->controller->action->id=='step3')
		{?>
        <li class="current"><a href="install.php?r=Install/default/build">Database setup<span>3</span></a></li>
        <?php 
		}
		else if(Yii::app()->controller->action->id=='step1' or Yii::app()->controller->action->id=='step2')
        { ?>
        <li class=""><a href="install.php?r=Install/default/build">Database setup<span>3</span></a></li>
        <?php	
        }
		else
        { ?>
        <li class="finish"><a href="install.php?r=Install/default/build">Database setup<span>3</span></a></li>
        <?php	
        }
        ?>
        
        <?php if(Yii::app()->controller->action->id=='step4')
		{?>
        <li class="current"><a href="install.php?r=Install/default/finish">Register<span>4</span></a></li>
        <?php 
		}
		else if(Yii::app()->controller->action->id=='step1' or Yii::app()->controller->action->id=='step2' or Yii::app()->controller->action->id=='step3')
        { ?>
        <li class=""><a href="install.php?r=Install/default/finish">Register<span>4</span></a></li>
        <?php	
        }
		else
        { ?>
        <li class="finish"><a href="install.php?r=Install/default/finish">Register<span>4</span></a></li>
        <?php	
        }
        ?>
        
        
        <?php if(Yii::app()->controller->action->id=='step5')
		{?>
        <li class="current"><a href="install.php?r=Install/default/finish">Final step<span>5</span></a></li>
        <?php 
		}
		else if(Yii::app()->controller->action->id=='step1' or Yii::app()->controller->action->id=='step2' or Yii::app()->controller->action->id=='step3'  or Yii::app()->controller->action->id=='step4')
        { ?>
        <li class=""><a href="install.php?r=Install/default/finish">Final step<span>5</span></a></li>
        <?php	
        }
		else
        { ?>
        <li class="finish"><a href="install.php?r=Install/default/finish">Final step<span>5</span></a></li>
        <?php	
        }
        ?>
        

<!--<li class=""><a href="install.php?r=Install/default/info">Administrator account<span>4</span></a></li>
<li><a href="install.php?r=Install/default/finish">Final step<span>5</span></a></li>-->
</ul>
        <script type="text/javascript">
        $(function(){
           //disable click on menu
            $('#menu a').click(function(){
                return false;
            });
        });
        </script>
                <!--<p class="welcome"><strong>Welcome to openschool installation wizard</strong></p>
                <dl class="list-1">
                    <dt>Version 0.3.41</dt>
                    <dd><span>Stability:</span> <strong>Unstable</strong></dd>
                    <dd><span>Modules:</span> <strong>6</strong></dd>
                </dl>
                <div class="section">
                    <h3>Thank you</h3>
                    <p>This is a beta release of openschool. There are still lot of work to do in packaging
                    the CMS to make it ready for production. Contact us if you need support.</p>
                </div>
                <div class="section">                    
                    <h3>More information</h3>
                    <ul class="list-3">
                        <li><a href="http://www.openschool.com" target="_blank">wiwo inc.</a></li>
                        <li><a href="http://www.openschool.com" target="_blank">openschool site</a></li>
                    </ul>
                </div>-->
            </div>
            <!-- aside -->
        </div>
        
    </div>
    <!-- main.end -->
    
    <!-- footer -->
    <div id="footer">
        <div class="copy">&copy; Copyright 20011 - 2012 wiwo inc.<br/>All rights reserved.</div>
    </div>
    <!-- footer.end -->
    
</div>

</body>
</html>