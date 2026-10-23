/* SE_PLY_CRASH_KOOPA_ref
 * address: 0x60090FE8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_PLY_CRASH_KOOPA_ref(int a1, int a2)
{
  unsigned int result; // r0
  _DWORD *v5; // r6
  float v6; // s2
  _DWORD *v7; // r5
  int v8; // r7

  v5 = (_DWORD *)(a1 + 15240);
  result = FIELD_U32(a1, 15240);
  if ( result <= 3 )
  {
    v6 = FIELD_F32(a1, 108);
    v7 = *(_DWORD **)(PlayerMgr_instance + 4 * result + 32);
    if ( v6 < (float)(FIELD_F32(dword_60CC6484, 208) + 64.0) )
      a2 = 0;
    if ( v6 > (float)(FIELD_F32(dword_60CC6484, 216) + -64.0) )
      a2 = 1;
    (*(void (__fastcall **)(_DWORD *, int, int, int, int))(*v7 + 1176))(v7, 4, a2, 1, 1);
    v8 = 0;
    sub_607734E8((int)v7, (int)"SE_PLY_CRASH_KOOPA", 0, 0);
    AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, *(char *)v5, 4, 0, 0);
    sub_603F01A0(dword_60C99D6C, *v5, 27, 0);
    sub_603F01A0(dword_60C99D6C, *v5, 30, 0);
    FIELD_U32(a1, 15252) = 2;
    result = 60;
    v7[2393] = 60;
    if ( *v5 < 4u )
      v8 = *v5;
    *(_DWORD *)(a1 + 4 * v8 + 15276) = 60;
  }
  return result;
}
