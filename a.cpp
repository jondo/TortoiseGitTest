int Segmentation::ignore( int position, int type )
{
  if( print[position] == type ) return 0;

  print[position]  = type;
  output[position] = table( type );
  return 1;
}
