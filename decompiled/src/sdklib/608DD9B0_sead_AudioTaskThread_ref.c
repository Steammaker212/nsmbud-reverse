/* sead_AudioTaskThread_ref
 * address: 0x608DD9B0   size: 220   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead_AudioTaskThread_ref(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  unsigned int v5; // r5
  int v6; // r0
  int v7; // r0
  _DWORD v9[6]; // [sp+8h] [bp-18h] BYREF

  if ( FIELD_U8(a1, 184) )
  {
    v2 = operator_new_8DE25C(0x94u, *(void **)(a1 + 116), 4);
    v3 = FIELD_U32(a1, 116);
    v4 = FIELD_U32(a1, 188);
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "sead__AudioTaskThread";
    FIELD_U32(a1, 180) = ((int (__fastcall *)(int, int, int, _DWORD *, int, int))sub_608DDE28)(
                              v2,
                              v4,
                              v3,
                              v9,
                              0x2000,
                              64);
  }
  if ( FIELD_U8(a1, 192) )
  {
    v5 = sub_608AD370(a1 + 16);
    v6 = operator_new_8DE2C8(v5, FIELD_U32(a1, 116), 64);
    FIELD_U32(a1, 120) = v6;
    FIELD_U32(a1, 8) = v6;
    FIELD_U32(a1, 12) = v5;
    FIELD_U8(a1, 94) = 1;
    FIELD_U8(a1, 97) = 1;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 60))(a1);
  v7 = FIELD_U32(a1, 180);
  if ( v7 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 24))(v7);
  FIELD_U8(a1, 124) = 1;
  return 1;
}
