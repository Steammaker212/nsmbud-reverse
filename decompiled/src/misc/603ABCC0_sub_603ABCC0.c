/* sub_603ABCC0
 * address: 0x603ABCC0   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_603ABCC0(int a1)
{
  int v2; // r0
  int v3; // r1
  _WORD *v5; // r2
  int v6; // r12
  int v7; // r3
  int v8; // r0
  int v9; // r2

  if ( FIELD_U8(PlayerMgr_instance, 156) )
    goto LABEL_8;
  if ( FIELD_U32(a1, 6656) )
  {
    if ( !((int (__fastcall *)(int))loc_603AE1DC)(a1) )
      goto LABEL_8;
  }
  else if ( !((int (__fastcall *)(int))loc_603AE00C)(a1) )
  {
LABEL_8:
    FIELD_U8(a1, 6684) = 1;
    FIELD_U32(a1, 6896) = 3;
    return (ModelWrapper *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97B4C);
  }
  v2 = sub_603ADD84(a1);
  if ( v2 )
    v3 = (float)(FIELD_F32(v2, 108) - FIELD_F32(a1, 108)) < 0.0;
  else
    v3 = 0;
  v5 = (_WORD *)(a1 + 6674);
  v6 = FIELD_U16(a1, 6674);
  v7 = FIELD_U32(a1, 80);
  if ( v7 != v3 )
  {
    if ( FIELD_U16(a1, 6674) )
    {
      v3 = FIELD_U32(a1, 80);
    }
    else
    {
      v6 = 1;
      v3 = v7 ^ 1;
      *v5 = 1;
      FIELD_U32(a1, 80) = v7 ^ 1;
    }
LABEL_16:
    v8 = FIELD_U32(a1, 160) + dword_60B00B14[v3];
    FIELD_U32(a1, 160) = v8;
    if ( (unsigned int)(v8 + 0x1FFFFFFF) >= 0x3FFFFFFF )
    {
      v6 = 0;
      FIELD_U32(a1, 160) = dword_60B00B0C[v3];
      *v5 = 0;
    }
    goto LABEL_18;
  }
  if ( FIELD_U16(a1, 6674) )
    goto LABEL_16;
  v6 = 0;
LABEL_18:
  v9 = FIELD_U32(a1, 6924);
  if ( v9 )
  {
    FIELD_U32(a1, 6924) = v9 - 1;
    return (ModelWrapper *)(v9 - 1);
  }
  else
  {
    if ( !v6
      && (FIELD_U32(a1, 6648) != 1 || (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 28) & 0x20) != 0) )
    {
      FIELD_U16(a1, 6676) = 2;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97B2C);
    }
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6304));
    return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  }
}
