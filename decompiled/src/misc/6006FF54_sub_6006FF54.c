/* sub_6006FF54
 * address: 0x6006FF54   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006FF54(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  int v4; // r0
  _DWORD *v5; // r5
  int v6; // r0
  _DWORD *v7; // r5
  int v8; // r0
  _DWORD *v9; // r5
  int v10; // r0
  _DWORD *v11; // r5
  int v12; // r0
  _DWORD *v13; // r5
  int v14; // r0
  _DWORD *v15; // r5
  int result; // r0
  int *v17; // r5

  v3 = (_DWORD *)(a1 + 7172);
  v2 = FIELD_U32(a1, 7172);
  if ( v2 >= 1 )
  {
    *v3 = v2 - 1;
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7148));
    if ( !*v3 )
    {
      FIELD_U32(a1, 7172) = 0;
      FIELD_U32(a1, 7168) = 0;
      FIELD_U32(a1, 7164) = 0;
      FIELD_U32(a1, 7160) = 0;
      FIELD_U32(a1, 7156) = 0;
      FIELD_U32(a1, 7152) = 0;
    }
  }
  v5 = (_DWORD *)(a1 + 7200);
  v4 = FIELD_U32(a1, 7200);
  if ( v4 >= 1 )
  {
    *v5 = v4 - 1;
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7176));
    if ( !*v5 )
    {
      FIELD_U32(a1, 7200) = 0;
      FIELD_U32(a1, 7196) = 0;
      FIELD_U32(a1, 7192) = 0;
      FIELD_U32(a1, 7188) = 0;
      FIELD_U32(a1, 7184) = 0;
      FIELD_U32(a1, 7180) = 0;
    }
  }
  v7 = (_DWORD *)(a1 + 7228);
  v6 = FIELD_U32(a1, 7228);
  if ( v6 >= 1 )
  {
    *v7 = v6 - 1;
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7204));
    if ( !*v7 )
    {
      FIELD_U32(a1, 7228) = 0;
      FIELD_U32(a1, 7224) = 0;
      FIELD_U32(a1, 7220) = 0;
      FIELD_U32(a1, 7216) = 0;
      FIELD_U32(a1, 7212) = 0;
      FIELD_U32(a1, 7208) = 0;
    }
  }
  v9 = (_DWORD *)(a1 + 7256);
  v8 = FIELD_U32(a1, 7256);
  if ( v8 >= 1 )
  {
    *v9 = v8 - 1;
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7232));
    if ( !*v9 )
    {
      FIELD_U32(a1, 7256) = 0;
      FIELD_U32(a1, 7252) = 0;
      FIELD_U32(a1, 7248) = 0;
      FIELD_U32(a1, 7244) = 0;
      FIELD_U32(a1, 7240) = 0;
      FIELD_U32(a1, 7236) = 0;
    }
  }
  v11 = (_DWORD *)(a1 + 7284);
  v10 = FIELD_U32(a1, 7284);
  if ( v10 >= 1 )
  {
    *v11 = v10 - 1;
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7260));
    if ( !*v11 )
    {
      FIELD_U32(a1, 7284) = 0;
      FIELD_U32(a1, 7280) = 0;
      FIELD_U32(a1, 7276) = 0;
      FIELD_U32(a1, 7272) = 0;
      FIELD_U32(a1, 7268) = 0;
      FIELD_U32(a1, 7264) = 0;
    }
  }
  v13 = (_DWORD *)(a1 + 7312);
  v12 = FIELD_U32(a1, 7312);
  if ( v12 >= 1 )
  {
    *v13 = v12 - 1;
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7288));
    if ( !*v13 )
    {
      FIELD_U32(a1, 7312) = 0;
      FIELD_U32(a1, 7308) = 0;
      FIELD_U32(a1, 7304) = 0;
      FIELD_U32(a1, 7300) = 0;
      FIELD_U32(a1, 7296) = 0;
      FIELD_U32(a1, 7292) = 0;
    }
  }
  v15 = (_DWORD *)(a1 + 7340);
  v14 = FIELD_U32(a1, 7340);
  if ( v14 >= 1 )
  {
    *v15 = v14 - 1;
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7316));
    if ( !*v15 )
    {
      FIELD_U32(a1, 7340) = 0;
      FIELD_U32(a1, 7336) = 0;
      FIELD_U32(a1, 7332) = 0;
      FIELD_U32(a1, 7328) = 0;
      FIELD_U32(a1, 7324) = 0;
      FIELD_U32(a1, 7320) = 0;
    }
  }
  v17 = (int *)(a1 + 7368);
  result = FIELD_U32(a1, 7368);
  if ( result >= 1 )
  {
    *v17 = result - 1;
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7344));
    result = *v17;
    if ( !*v17 )
    {
      FIELD_U32(a1, 7368) = 0;
      FIELD_U32(a1, 7364) = 0;
      FIELD_U32(a1, 7360) = 0;
      FIELD_U32(a1, 7356) = 0;
      FIELD_U32(a1, 7352) = 0;
      FIELD_U32(a1, 7348) = 0;
      return 7348;
    }
  }
  return result;
}
