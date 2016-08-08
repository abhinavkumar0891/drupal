<?php
function form_example_form($form, &$form_state) {
	$form['name'] = array(
    '#type' => 'textfield', //you can find a list of available types in the form api
    '#title' => 'Name:',
    '#size' => 10,
    '#maxlength' => 10,
    '#required' => TRUE, //make this field required 
  );
   $form['phone'] = array(
    '#type' => 'textfield',
    '#title' => 'Phone no:',
    '#size' =>10,
    '#maxlength' =>10,
   	);
  $form['gender'] = array(
   '#type' => 'radios',
   '#title' => 'Gender',
   '#options' => array('male'=>t('male'),'female'=>t('female')),
  	);
  $form['hobbies']= array(
    '#type' => 'checkboxes',
    '#title' => 'select your hobbies',
    '#options' => array('cricket','football','basketball','tabletennis'),
  	);
  $form['description']= array(
    '#type' => 'textarea',
    '#title' =>'description',
   // '#default_value' => 'put description about employee',
    '#rows' =>10,
    '#cols' =>20,
    '#resizable' =>True,
  	);
  
  $form['submit_button'] = array(
    '#type' => 'submit',
    '#value' => t('Click Here!'),
  );
  
  return $form;
}


function form_example_form_validate($form, &$form_state) {
}

function form_example_form_submit($form, &$form_state) {
}




