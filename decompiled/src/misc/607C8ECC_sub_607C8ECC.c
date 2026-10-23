/* sub_607C8ECC
 * address: 0x607C8ECC   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C8ECC(_DWORD *a1, int a2)
{
  int v4; // r5
  _DWORD *v5; // r7
  bool v6; // zf
  _DWORD *v7; // r6
  float v8; // s0

  v4 = 1;
  v5 = a1 + 2452;
  switch ( a1[2452] )
  {
    case 0:
      *v5 = 1;
      PlayerBase_dispatchVirtual3((int)(a1 + 2839), 91, 0.0);
      sub_6076DC6C((int)a1, a2);
      v4 = 0;
      break;
    case 1:
      v4 = 0;
      if ( sub_60793CA8(a1[2840]) == 1 )
      {
        a1[308] &= ~0x10u;
        if ( (FIELD_U8(dword_60CBFA90, 61) & 8) != 0 )
          goto LABEL_15;
        v6 = dword_60C99DD4 == 0;
        if ( dword_60C99DD4 )
          v6 = FIELD_U32(dword_60C99DD4, 764) == 2;
        if ( v6 || !a1[3778] )
        {
LABEL_15:
          v4 = 0;
          v8 = 30.0;
          goto LABEL_16;
        }
        v4 = 0;
        a1[2428] = 0;
        *v5 = 7;
      }
      break;
    case 7:
      v4 = 0;
      v7 = a1 + 2428;
      if ( !a1[2428] )
      {
        if ( a1[3778] )
        {
          sub_607C90E4(a1);
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), 225, 0.0);
          sub_60793114((_DWORD *)a1[2840], 0.0);
          *v5 = 7;
          *v7 = 40;
        }
        else
        {
          *v7 = 40;
          *v5 = 8;
        }
      }
      break;
    case 8:
      v4 = 0;
      if ( sub_60793CA8(a1[2840]) == 1 )
      {
        v8 = 10.0;
        v4 = 0;
LABEL_16:
        sub_60794954((int)(a1 + 2839), 0, v8, 0.0);
        (*(void (__fastcall **)(_DWORD *))(*a1 + 704))(a1);
      }
      break;
    default:
      return v4;
  }
  return v4;
}
