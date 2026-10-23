/* sub_6067C4DC
 * address: 0x6067C4DC   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067C4DC(int a1)
{
  int v1; // r6
  _BYTE *v3; // r0
  char v4; // r1
  int v5; // t1
  _DWORD *v6; // r7
  int result; // r0
  bool v8; // zf
  unsigned int v9; // r1
  int v10; // r8
  _BYTE *v11; // r11

  v5 = FIELD_U8(a1, 10190);
  v3 = (_BYTE *)(a1 + 10190);
  v4 = v5;
  if ( v5 )
    *v3 = v4 - 1;
  if ( FIELD_U8(a1, 10191) )
    --FIELD_U8(a1, 10191);
  if ( FIELD_U8(a1, 10192) )
    --FIELD_U8(a1, 10192);
  if ( FIELD_U8(a1, 10193) )
    --FIELD_U8(a1, 10193);
  v6 = *(_DWORD **)(a1 + 9408);
  if ( v6 )
  {
    result = 0;
    do
    {
      v8 = *v6 == 0;
      if ( *v6 )
      {
        v1 = *(_DWORD *)(*v6 + 2196);
        v8 = v1 == 0;
      }
      if ( !v8 && FIELD_U8(v1, 533) == 1 )
      {
        v9 = FIELD_S8(v1, 84);
        if ( v9 <= 3 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v9)) != 0 )
        {
          v10 = (1 << v9) | result;
          v11 = (_BYTE *)(a1 + v9 + 10190);
          if ( !*v11 && (FIELD_U8(v1, 1210) & 1) != 0 )
          {
            sub_6067F09C(a1 + 6100, FIELD_F32(v1, 108));
            *v11 = 4;
          }
          result = v10 | sub_606BA918(v1);
        }
      }
      v6 = (_DWORD *)v6[1];
    }
    while ( v6 );
  }
  else
  {
    result = 0;
  }
  FIELD_U16(a1, 10184) = result;
  return result;
}
