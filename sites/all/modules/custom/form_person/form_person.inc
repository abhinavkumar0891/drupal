<?php
function form_example($form, &$form_state) {
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
  
  $form['age'] = array(
  '#type' => 'integerfield',//provide the age of person
  $form['description']= array(
    '#type' => 'textarea',
    '#title' =>'description',
   // '#default_value' => 'put description about person',
    '#rows' =>10,
    '#cols' =>20,
    '#resizable' =>True,
  	);
  
  $form['submit_button'] = array(
    '#type' => 'submit',
    '#value' => t('Submit!'),
  );
  
  return $form;
}



function form_example_person_submit($form, &$form_state) {
}
