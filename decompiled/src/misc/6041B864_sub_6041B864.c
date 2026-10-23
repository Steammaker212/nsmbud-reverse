/* sub_6041B864
 * address: 0x6041B864   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041B864(int a1, _DWORD *a2, int a3, void *a4)
{
  int v8; // r7
  size_t v9; // r9
  void *v10; // r0
  const void *v11; // r1
  void *v12; // r0

  v8 = dword_60C9BAF4;
  if ( (a2[8] & 7) == 4 )
  {
    v9 = FIELD_U32(dword_60C9BAF4, 804);
    v10 = (void *)(*(int (__fastcall **)(int, size_t, _DWORD))(*(_DWORD *)a3 + 24))(
                    a3,
                    v9,
                    FIELD_U32(dword_60C9BAF4, 808));
    FIELD_U32(a1, 72) = v10;
    v11 = *(const void **)(v8 + 800);
  }
  else
  {
    v9 = FIELD_U32(dword_60C9BAF4, 792);
    v10 = (void *)(*(int (__fastcall **)(int, size_t, _DWORD))(*(_DWORD *)a3 + 24))(
                    a3,
                    v9,
                    FIELD_U32(dword_60C9BAF4, 796));
    FIELD_U32(a1, 72) = v10;
    v11 = *(const void **)(v8 + 788);
  }
  qmemcpy(v10, v11, v9);
  FIELD_U32(a1, 1736) = operator_new_8DE25C(0x1BF0u, a4, 1);
  sub_6041BD28(a1, *a2, a2 + 1, a3);
  sub_6041BFD0(a1, *a2, a4);
  MiiMaskTexture_ref(a1, *a2, a4);
  v12 = *(void **)(a1 + 1736);
  if ( v12 )
  {
    operator_delete(v12);
    FIELD_U32(a1, 1736) = 0;
  }
  sub_6041C300(a1, a2 + 1, a4);
  return sub_6041C4A0(a1, a2 + 1, a4);
}
