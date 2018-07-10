template <class T> T& findMax(T *iarray,int nentries)
{
  T maxvalue =0 ;
  T& returnmax = maxvalue;
  T *p = iarray;

  for(int i=0;i<nentries;i++){
    if(0==i){
      maxvalue = *p;
    }else if(maxvalue<*p){
      maxvalue = *p;
      p++;
    }
  }

  return returnmax;
}
