/* sub_6030309C
 * address: 0x6030309C   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030309C(int a1)
{
  char v1; // r12
  _BYTE *v3; // r6
  int v4; // r5
  int result; // r0
  char v6; // r12
  int v7; // r1
  int v8; // r2
  int v9; // r0

  FIELD_U8(a1, 7033) = 0;
  v3 = (_BYTE *)(a1 + 7033);
  v4 = FIELD_U32(a1, 56);
  if ( v4 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1613770964 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    result = (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI);
    if ( result == 1 )
    {
      v7 = FIELD_U32(v4, 160);
      v8 = FIELD_U32(v4, 164);
      FIELD_U32(a1, 156) = FIELD_U32(v4, 156);
      FIELD_U32(a1, 160) = v7;
      FIELD_U32(a1, 164) = v8;
      FIELD_U32(a1, 6968) = FIELD_U32(v4, 144);
      FIELD_U32(a1, 6972) = FIELD_U32(v4, 148);
      FIELD_U32(a1, 6976) = FIELD_U32(v4, 152);
      if ( ((unsigned int)&dword_60C92F04 & ~(1613771124 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
      {
        dword_60C92F00 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C92F04);
      }
      result = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C92F00);
      if ( result == 1 )
      {
        FIELD_U32(a1, 144) = FIELD_U32(v4, 6920);
        FIELD_U32(a1, 148) = FIELD_U32(v4, 6924);
        FIELD_U32(a1, 152) = FIELD_U32(v4, 6928);
        FIELD_U32(a1, 108) = FIELD_U32(v4, 6516);
        FIELD_U32(a1, 112) = FIELD_U32(v4, 6520);
        FIELD_U32(a1, 116) = FIELD_U32(v4, 6524);
        v9 = FIELD_U8(v4, 6607);
        FIELD_U8(a1, 7034) = v9;
        if ( v9 )
        {
          FIELD_U32(a1, 6980) = FIELD_U32(v4, 6528);
          FIELD_U32(a1, 6984) = FIELD_U32(v4, 6532);
        }
        result = FIELD_U32(v4, 6580);
        if ( result )
        {
          *v3 = 1;
          return 1;
        }
      }
    }
  }
  else
  {
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
