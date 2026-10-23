/* sub_60001C34
 * address: 0x60001C34   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60001C34(StageActor *this, int a2)
{
  int v4; // r6
  int v5; // r0
  char v6; // r12
  int v7; // r7
  _BOOL4 result; // r0
  int v9; // r1
  bool v10; // zf
  int v11; // r0

  if ( (FIELD_U8(a2, 2336) & 8) != 0 )
    return 1;
  v4 = sub_6014B6F8(a2);
  v5 = sub_6014B69C(a2);
  if ( !v5 )
    goto LABEL_11;
  v7 = FIELD_U32(v5, 144);
  if ( ((unsigned int)&dword_60C7B384 & ~(1610620028 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
  {
    dword_60C7B380 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B384);
  }
  if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B380) == 1 )
  {
    result = 0;
    if ( !v4 || FIELD_U32(v7, 6880) )
      return result;
  }
  else
  {
LABEL_11:
    if ( !v4 )
      return 0;
  }
  v9 = FIELD_U32(v4, 300);
  result = 0;
  v10 = v9 == 31;
  if ( v9 != 31 )
    v10 = v9 == 17;
  if ( v10 )
  {
    if ( sub_6014B69C(a2) && *(float *)&FIELD_U32(this, 0xB8) > 0.0 )
      return 1;
    v11 = sub_6014B6F8(a2);
    if ( v11 )
      return (float)((float)((float)(*(float *)(FIELD_U32(v11, 152) + 4) + FIELD_F32(v11, 176))
                           + FIELD_F32(v11, 208))
                   - (float)((float)(*(float *)(FIELD_U32(v11, 156) + 4) + FIELD_F32(v11, 184))
                           + FIELD_F32(v11, 216))) < 0.0;
    return 0;
  }
  return result;
}
