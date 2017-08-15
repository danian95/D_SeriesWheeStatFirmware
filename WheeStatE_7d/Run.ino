// General run program

void runProg() {
  if (sweep == true) {
    
  }


  while(runState == true) {
    if (sweep == true) {
      dAppl = dAppl + dSig;


      
    }
    
    PWMWrite(signal_pin,pwmRes,dAppl,pwmClock);
    readVolts();
    readCurrent(true);
    Serial.print(iMin);
    Serial.print(",");
    Serial.println(iMax);

    if(Serial.available()>0) {
      sRead = Serial.read();
      if (sRead == '%') {
        runState = false;
      }
    }
  }

  openCircuit();
}

