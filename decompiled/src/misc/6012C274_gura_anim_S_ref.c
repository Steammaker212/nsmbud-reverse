/* gura_anim_S_ref
 * address: 0x6012C274   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall gura_anim_S_ref(int a1)
{
  int v1; // r0
  int **v2; // r4
  int v3; // r0
  int (__fastcall *v4)(int, int (***)()); // r2
  int v5; // r0
  _DWORD v7[3]; // [sp+4h] [bp-4Ch] BYREF
  int (**v8)(); // [sp+10h] [bp-40h] BYREF
  const char *v9; // [sp+14h] [bp-3Ch]
  int v10; // [sp+1Ch] [bp-34h]
  int v11; // [sp+2Ch] [bp-24h]
  int v12; // [sp+3Ch] [bp-14h]

  v2 = (int **)(a1 + 6300);
  v1 = FIELD_U32(a1, 6300);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "gura_anim_S";
  sub_6040F4B8(v1, &v8, 0);
  *((_WORD *)v2 - 12) = 60;
  v3 = **v2;
  v4 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v3 + 84);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "end";
  v5 = v4(v3, &v8);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v2 + 108))(**v2, v5, &v8);
  v7[0] = v10;
  v7[1] = v11;
  v7[2] = v12;
  IcicleDewHeap_ref(dword_60C99CDC, v7);
  v2[168] = (int *)8;
  return 8;
}
