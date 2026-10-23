/* sub_6069A76C
 * address: 0x6069A76C   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069A76C(unsigned int *a1)
{
  unsigned int *v2; // r0
  unsigned int v3; // t1
  int v4; // r1
  int result; // r0

  v3 = a1[1539];
  v2 = a1 + 1539;
  if ( v3 )
  {
    sub_60699C44(v2);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( a1[1542] )
  {
    sub_60699C44(a1 + 1542);
    v4 = 1;
  }
  if ( a1[1545] )
  {
    sub_60699C44(a1 + 1545);
    v4 = 1;
  }
  if ( a1[1548] )
  {
    sub_60699C44(a1 + 1548);
    v4 = 1;
  }
  if ( a1[1551] )
  {
    sub_60699C44(a1 + 1551);
    v4 = 1;
  }
  if ( a1[1554] )
  {
    sub_60699C44(a1 + 1554);
    v4 = 1;
  }
  if ( a1[1557] )
  {
    sub_60699C44(a1 + 1557);
    v4 = 1;
  }
  if ( a1[1560] )
  {
    sub_60699C44(a1 + 1560);
    v4 = 1;
  }
  if ( a1[1563] )
  {
    sub_60699C44(a1 + 1563);
    v4 = 1;
  }
  if ( a1[1566] )
  {
    sub_60699C44(a1 + 1566);
    v4 = 1;
  }
  if ( a1[1569] )
  {
    sub_60699C44(a1 + 1569);
    v4 = 1;
  }
  if ( a1[1572] )
  {
    sub_60699C44(a1 + 1572);
  }
  else if ( !v4 )
  {
    result = dword_60CB9500;
    goto LABEL_29;
  }
  a1[1527] = dword_60CB9504;
  result = 0;
LABEL_29:
  a1[1529] = result;
  return result;
}
