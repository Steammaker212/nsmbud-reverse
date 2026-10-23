/* sub_6024756C
 * address: 0x6024756C   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024756C(int a1)
{
  int result; // r0
  int v3; // r1
  float v4; // s0
  float *v5; // r0
  float v6; // s2
  int (__fastcall *v7)(int, int *); // r2
  int *v8; // r1
  ActiveColliderMgr *v9; // r5

  result = FIELD_U8(a1, 6525);
  if ( result )
    return result;
  if ( FIELD_U32(dword_60C99D88, 32) || FIELD_U8(a1, 6524) )
  {
    result = FIELD_U32(a1, 6320);
    if ( result != 1 && (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) == 0 )
      return result;
    v3 = 1;
    if ( !FIELD_U8(a1, 6524) )
      return result;
    if ( result == 1 )
      goto LABEL_10;
  }
  else
  {
    v3 = 0;
    if ( FIELD_U32(a1, 6320) == 1 )
    {
LABEL_10:
      if ( v3 )
      {
        FIELD_U32(a1, 6520) = 0;
        FIELD_U8(a1, 6524) = 0;
      }
      goto LABEL_12;
    }
  }
  if ( (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) != 0 )
    goto LABEL_10;
LABEL_12:
  v4 = FIELD_F32(a1, 108);
  v5 = (float *)dword_60CC6484;
  FIELD_U32(a1, 80) = FIELD_F32(dword_60CC6484, 112) >= v4;
  if ( FIELD_U32(a1, 6316) == 1 )
    FIELD_U32(a1, 6316) = 0;
  v6 = FIELD_F32(a1, 112);
  if ( v6 <= (float)(v5[31] + -6.0) && v6 >= v5[33] && v4 <= (float)(v5[30] + -16.0) && v4 >= (float)(v5[28] + 16.0) )
  {
    v9 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 188));
    }
    v7 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v8 = &dword_60C8DB84;
  }
  else
  {
    FIELD_U32(a1, 6400) = 1;
    v7 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v8 = &dword_60C8DB44;
  }
  return v7(a1, v8);
}
