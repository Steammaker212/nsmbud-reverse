/* sub_609236D8
 * address: 0x609236D8   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609236D8(int a1, void *a2, int a3)
{
  _DWORD *v5; // r4
  void *v6; // r9
  const void *v7; // r8
  int v8; // r0
  signed int v9; // r5
  bool v10; // cc
  signed int v11; // r0
  _BYTE v13[8]; // [sp+4h] [bp-3Ch] BYREF
  _BYTE v14[8]; // [sp+Ch] [bp-34h] BYREF
  _BYTE v15[44]; // [sp+14h] [bp-2Ch] BYREF

  v5 = (_DWORD *)operator_new_8DE25C(0x38u, a2, 4);
  sub_60941AD8(v15, a1);
  sub_60941B04(v14, a1);
  sub_60941B30(v13, a1);
  default_ref_9419C8(v5);
  *v5 = &off_60C5D898;
  v5[4] = v5 + 6;
  v5[3] = &BufferedSafeStringBase_char_vtable_probably;
  v5[5] = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v5 + 3));
  *(_BYTE *)v5[4] = 0;
  v5[3] = &off_60BD4C20;
  sub_60941A08(v5, v15, v14, v13, a3);
  v6 = (void *)v5[4];
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 12) + 12))(a1 + 12);
  v7 = *(const void **)(a1 + 16);
  if ( v6 != v7 )
  {
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 12) + 12))(a1 + 12);
    v8 = FIELD_U32(a1, 16);
    v9 = 0;
    while ( *(_BYTE *)(v8 + v9) )
    {
      if ( !*(_BYTE *)(v8 + v9 + 1) )
      {
        ++v9;
        break;
      }
      if ( !*(_BYTE *)(v8 + v9 + 2) )
      {
        v9 += 2;
        break;
      }
      v10 = v9 + 2 < 0x80000;
      v9 += 3;
      if ( !v10 )
      {
        v9 = 0;
        break;
      }
    }
    v11 = v5[5];
    if ( v9 >= v11 )
      v9 = v11 - 1;
    qmemcpy(v6, v7, v9);
    *((_BYTE *)v6 + v9) = 0;
  }
  return v5;
}
