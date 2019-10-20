<?php
  class Human
  {
    private $name;
    private $pswd;

    public function __construct($Name, $Pswd){
      $this->name = $Name;
      $this->pswd = $Pswd;
    }

    public function GetName(){
      return $this->name;
    }

    public function GetPswd(){
      return $this->pswd;
    }
  }



  $Human = new Human("Perceval", "Provencal");

  echo $Human->GetName();
  echo $Human->GetPswd();
?>
