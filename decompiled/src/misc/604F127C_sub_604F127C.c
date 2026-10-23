/* sub_604F127C
 * address: 0x604F127C   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F127C(_DWORD *a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // t1
  int result; // r0
  _DWORD v7[2]; // [sp+4h] [bp-24h] BYREF
  int v8; // [sp+Ch] [bp-1Ch] BYREF

  v1 = a1;
  v2 = a1 + 11522;
  v8 = 0;
  sub_60502210(a1 + 11522, &v8, 10);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "ItemList";
  sead__SafeStringBase__operator_assign((int)(v1 + 11775), (int)v7);
  sub_605029FC(v2, &unk_60B03214, "SE_SYS_BACK");
  sub_605028F0(v2, &unk_60B03214, 1);
  v3 = v1 + 11535;
  v4 = sub_608DE61C(v1 + 11535, 0);
  v5 = v1[11538];
  v1 += 11538;
  *(_DWORD *)(v4 - v5 + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(v3, 0) - *v1 + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  *(_DWORD *)(sub_608DE61C(v3, 1) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 2) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 3) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 4) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 5) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 6) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 7) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 8) - *v1 + 192) = 0;
  *(_DWORD *)(sub_608DE61C(v3, 9) - *v1 + 192) = 0;
  result = sub_608DE61C(v3, 10) - *v1;
  FIELD_U32(result, 192) = 0;
  return result;
}
