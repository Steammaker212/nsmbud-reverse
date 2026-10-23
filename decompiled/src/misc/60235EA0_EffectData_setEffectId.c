/* EffectData_setEffectId
 * address: 0x60235EA0   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall EffectData_setEffectId(EffectData *this, int effectId)
{
  int _34; // r0
  int *_34_ptr; // r7
  int v6; // r0
  int v7; // r5
  float *v8; // r0

  _34_ptr = &FIELD_U32(this, 0x34);
  _34 = FIELD_U32(this, 0x34);
  if ( !_34
    || FIELD_U32(this, 0x38) != FIELD_U32(_34, 32)
    || (v6 = sub_60881E10(_34_ptr), FIELD_S32(v6, 352) < 1)
    || (v7 = 0, !FIELD_U8(v6, 8)) )
  {
    v7 = 0;
    *(_QWORD *)FIELD_U32(this, 0x0).cells = 1065353216;
    *(_QWORD *)&FIELD_U32(this, 0x0).cells[2] = 0;
    *(_QWORD *)&FIELD_U32(this, 0x0).cells[4] = 0x3F80000000000000LL;
    *(_QWORD *)&FIELD_U32(this, 0x0).cells[6] = 0;
    *(_QWORD *)&FIELD_U32(this, 0x0).cells[8] = 0;
    *(_QWORD *)&FIELD_U32(this, 0x0).cells[10] = 1065353216;
    FIELD_U8(this, 0x30) = 0;
    FIELD_U32(this, 0x34) = 0;
    FIELD_U32(this, 0x38) = -1;
    FIELD_U32(this, 0x3C) = 0;
    if ( dword_60C8D9DC )
    {
      if ( EffectData_setEffectId_helper_239BF4(dword_60C8D9DC, _34_ptr, &qword_60B3B8CC, effectId) == 1 )
      {
        v8 = (float *)EffectData_setEffectId_helper(dword_60C8D9DC, effectId);
        v7 = 1;
        FIELD_U32(this, 0x3C) = (int)v8;
        if ( v8 )
        {
          if ( v8[1] == 1.0 && v8[2] == 0.0 && v8[3] == 0.0 && v8[4] == 0.0 )
            FIELD_U32(this, 0x3C) = 0;
        }
      }
    }
  }
  return v7;
}
