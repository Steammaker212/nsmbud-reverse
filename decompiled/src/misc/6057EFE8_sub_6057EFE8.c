/* sub_6057EFE8
 * address: 0x6057EFE8   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057EFE8(int a1)
{
  char v1; // r12
  int v3; // r5
  _DWORD *v4; // r11
  int v5; // r8
  int v6; // r7
  _BOOL4 v7; // r9
  int v8; // r0
  int result; // r0

  v3 = FIELD_U32(a1, 36);
  v4 = (_DWORD *)(a1 + 7484);
  if ( v3 == a1 + 32 )
    goto LABEL_12;
  v5 = FIELD_U32(a1, 44);
  v6 = v3 - v5;
  do
  {
    v7 = 1;
    if ( *v4 == 1 )
    {
      if ( ((unsigned int)&dword_60C958D4 & ~(1616375928 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C958D4) )
      {
        dword_60C958D0 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C958D4);
      }
      v8 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C958D0);
      if ( v6 && v8 == 1 )
        v7 = FIELD_U8(v6, 7356) == 0;
    }
    v3 = FIELD_U32(v3, 4);
    v6 = v3 - v5;
    result = a1 + 32 - FIELD_U32(a1, 44);
  }
  while ( v3 - v5 != result );
  if ( !v7 )
  {
LABEL_12:
    sub_603FD768(
      dword_60C99DF4,
      FIELD_U8(LevelInfo_instance, 18),
      2,
      FIELD_F32(a1, 6980),
      FIELD_F32(a1, 6984));
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U16(a1, 7376) = 0;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
    if ( *v4 == 1 )
    {
      FIELD_U32(a1, 7396) = 0;
      FIELD_U32(a1, 7388) = 2;
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAED6C);
      result = FIELD_U32(a1, 3192) | 0x40000000;
      FIELD_U32(a1, 3192) = result;
    }
    else
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
    }
  }
  return result;
}
