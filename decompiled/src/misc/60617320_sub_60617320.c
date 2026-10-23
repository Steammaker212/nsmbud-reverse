/* sub_60617320
 * address: 0x60617320   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60617320(int a1)
{
  __int64 v2; // r0
  char v3; // r12
  int result; // r0
  int v5; // r6
  int v6; // r11
  int v7; // r5
  int v8; // r0
  int (__fastcall *v9)(int, int *); // r2
  int *v10; // r1
  unsigned int v11; // r0

  v2 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  if ( FIELD_S32(a1, 7180) <= 2 )
  {
    result = FIELD_U32(EventMgr__instance, 16) & v2
           | ((FIELD_U64(EventMgr__instance, 16) & (unsigned __int64)v2) >> 32);
    if ( result )
      return result;
    FIELD_U8(a1, 7080) = 4;
    v5 = FIELD_U32(a1, 36);
    if ( v5 != a1 + 32 )
    {
      v6 = FIELD_U32(a1, 44);
      v7 = v5 - v6;
      do
      {
        if ( ((unsigned int)&dword_60CB3360 & ~(1616999392 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3360) )
        {
          dword_60CB335C = (int)&off_60C1028C;
          _cxa_guard_release(&dword_60CB3360);
        }
        v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60CB335C);
        if ( v7 )
        {
          if ( v8 == 1 )
            FIELD_U8(v7, 7184) = 1;
        }
        v5 = FIELD_U32(v5, 4);
        v7 = v5 - v6;
      }
      while ( v5 - v6 != a1 + 32 - FIELD_U32(a1, 44) );
    }
    v9 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v10 = &dword_60CB32EC;
    return v9(a1, v10);
  }
  if ( SE_OBJ_GET_RED_COIN_ref_2(a1, HIDWORD(v2)) == 1 )
  {
    v9 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v10 = &dword_60CB3334;
    return v9(a1, v10);
  }
  v11 = FIELD_U8(a1, 539) - 1;
  if ( v11 >= 0x40 )
    v11 = 0;
  if ( *(_DWORD *)(EventMgr__instance + 12 * v11 + 24) )
    sub_6072A748(EventMgr__instance);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
