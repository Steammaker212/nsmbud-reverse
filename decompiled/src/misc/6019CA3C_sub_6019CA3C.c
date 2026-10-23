/* sub_6019CA3C
 * address: 0x6019CA3C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019CA3C(int a1)
{
  unsigned __int8 *v2; // r5
  unsigned __int8 v3; // r0
  int v4; // r6
  int v5; // r0
  unsigned int v6; // r1

  FIELD_U8(a1, 12891) = 5;
  v2 = (unsigned __int8 *)(a1 + 12891);
  sub_6019CB4C(a1);
  sub_6019D04C(a1);
  v3 = *v2;
  if ( *v2 )
  {
    v4 = 0;
    do
    {
      if ( v4 )
      {
        v5 = 0;
        if ( (unsigned int)v4 < 6 )
          v5 = v4;
        *(_DWORD *)(a1 + 40 * v5 + 12660) = sub_608332B0(a1 + 40 * v5 + 12632, a1 + 40 * v5 + 12644) - 0x40000000;
        v3 = *v2;
      }
      else
      {
        if ( FIELD_U32(a1, 240) == 3 )
          v6 = -1073741824;
        else
          v6 = 0x80000000;
        FIELD_U32(a1, 12660) = v6;
      }
      ++v4;
    }
    while ( v4 < v3 );
  }
  sub_6019DE18(a1);
  FIELD_U32(a1, 212) = 1135542272;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 84))(a1);
  StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C89D54);
  FIELD_U8(a1, 12893) = sub_6022CC88(dword_60C8D864, 3, 15);
  return 1;
}
