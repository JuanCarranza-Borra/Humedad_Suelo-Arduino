class Sen_Hum_Suelo{
  private: int _Pin;
  public:
  void attach(int _P);
  int GetHumedad(void);
};

void Sen_Hum_Suelo::attach(int _P)
{
  _Pin=_P;
}

int Sen_Hum_Suelo::GetHumedad(void)
{
  int _H;
  _H=map(analogRead(_Pin),0,1023,100,0);
  return(_H);
}

