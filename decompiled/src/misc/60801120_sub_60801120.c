/* sub_60801120
 * address: 0x60801120   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60801120(int a1, float **a2, int a3, int a4, int a5)
{
  sead_IDisposer *v9; // r0
  int v10; // r0
  float v11; // s0
  int v12; // r6
  sead_IDisposer *v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  char v17; // r0
  _DWORD v19[2]; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v20[17]; // [sp+Ch] [bp-44h] BYREF

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C27E5C;
  FIELD_U32(a1, 16) = a3;
  FIELD_U32(a1, 20) = a4;
  v9 = (sead_IDisposer *)operator_new(0x18u);
  sub_607FF584(v9, a4);
  FIELD_U32(a1, 24) = v10;
  FIELD_U32(a1, 28) = 0;
  FIELD_U8(a1, 40) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = 0;
  v11 = FIELD_F32(v10, 20);
  v19[0] = FIELD_U32(v10, 16);
  *(float *)&v19[1] = -v11;
  sub_60801B98(v20, a2, v19);
  v12 = dword_60C99DD4;
  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
  {
    v13 = (sead_IDisposer *)operator_new(0x28u);
    FIELD_U32(a1, 28) = sub_60800C04(v13, a2, (int)v20);
  }
  else
  {
    v14 = operator_new(0x38u);
    FIELD_U32(a1, 32) = sub_608014F8(v14, a2, v20, a5);
    if ( FIELD_U32(v12, 764) == 2 && sub_608024DC() == 1 )
    {
      v15 = operator_new(0x4Cu);
      v16 = sub_60801EC4(v15, a2, a5);
      FIELD_U32(a1, 36) = v16;
      goto LABEL_7;
    }
  }
  v16 = FIELD_U32(a1, 36);
  if ( !v16 )
  {
    v17 = 0;
    goto LABEL_9;
  }
LABEL_7:
  v17 = FIELD_U8(v16, 69);
LABEL_9:
  FIELD_U8(a1, 40) = v17;
  sead__IDisposer::~IDisposer(v20);
  return a1;
}
