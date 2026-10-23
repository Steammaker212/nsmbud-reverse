/* SE_SYS_DIALOGUE_IN_ref
 * address: 0x604853A8   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DIALOGUE_IN_ref(int a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r5
  int v4; // r6
  int v5; // r7
  int v6; // r5
  int result; // r0

  v2 = sub_603FD91C((_DWORD *)(dword_60C9A1F0 + 16), FIELD_U8(dword_60C9A1F0, 6558));
  v3 = sub_603FD93C((int)v2);
  (*(void (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 16) + 40))(**(_DWORD **)(a1 + 16), 0);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 40))(
    *(_DWORD *)(FIELD_U32(a1, 16) + 4),
    0);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 8) + 40))(
    *(_DWORD *)(FIELD_U32(a1, 16) + 8),
    0);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 12) + 40))(
    *(_DWORD *)(FIELD_U32(a1, 16) + 12),
    0);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 16) + 40))(
    *(_DWORD *)(FIELD_U32(a1, 16) + 16),
    0);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 20) + 40))(
    *(_DWORD *)(FIELD_U32(a1, 16) + 20),
    0);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 24) + 40))(
    *(_DWORD *)(FIELD_U32(a1, 16) + 24),
    0);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 28) + 40))(
    *(_DWORD *)(FIELD_U32(a1, 16) + 28),
    0);
  switch ( v3 )
  {
    case 0u:
      v4 = 1;
      v5 = 0;
      sub_60473DE4(*(_DWORD **)(a1 + 4), 1u, &dword_60C9F2D8, 0);
      FIELD_U32(a1, 20) = 0;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, **(_DWORD **)(a1 + 16));
      (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 16) + 40))(**(_DWORD **)(a1 + 16), 1);
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 40))(
        *(_DWORD *)(FIELD_U32(a1, 16) + 4),
        1);
      v6 = 0;
      goto LABEL_6;
    case 1u:
      v5 = 1;
      sub_60473DE4(*(_DWORD **)(a1 + 4), 1u, &dword_60C9F2E0, 0);
      v6 = 2;
      FIELD_U32(a1, 20) = 2;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 8));
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(FIELD_U32(a1, 16) + 8) + 40))(
        *(_DWORD *)(FIELD_U32(a1, 16) + 8),
        1);
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(FIELD_U32(a1, 16) + 12) + 40))(
        *(_DWORD *)(FIELD_U32(a1, 16) + 12),
        1);
      v4 = 3;
      goto LABEL_6;
    case 2u:
      sub_60473DE4(*(_DWORD **)(a1 + 4), 1u, &dword_60C9F2E8, 0);
      v6 = 4;
      FIELD_U32(a1, 20) = 4;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 16));
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(FIELD_U32(a1, 16) + 16) + 40))(
        *(_DWORD *)(FIELD_U32(a1, 16) + 16),
        1);
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(FIELD_U32(a1, 16) + 20) + 40))(
        *(_DWORD *)(FIELD_U32(a1, 16) + 20),
        1);
      v4 = 5;
      v5 = 2;
      goto LABEL_6;
    case 3u:
      sub_60473DE4(*(_DWORD **)(a1 + 4), 1u, &dword_60C9F2F0, 0);
      v6 = 6;
      FIELD_U32(a1, 20) = 6;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 24));
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(FIELD_U32(a1, 16) + 24) + 40))(
        *(_DWORD *)(FIELD_U32(a1, 16) + 24),
        1);
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(FIELD_U32(a1, 16) + 28) + 40))(
        *(_DWORD *)(FIELD_U32(a1, 16) + 28),
        1);
      v4 = 7;
      v5 = 3;
LABEL_6:
      *(_BYTE *)(*(_DWORD *)(a1 + 4 * v5 + 548) + 64) |= 1u;
      FIELD_U32(a1, 604) = v4;
      FIELD_U32(a1, 608) = v6;
      break;
    default:
      break;
  }
  sub_6045BF58(a1 + 88, 0);
  sub_60473DE4(*(_DWORD **)(a1 + 4), 0, &dword_60C9F2D0, 0);
  FIELD_U8(a1, 12) = 1;
  result = sub_60478680((int)"SE_SYS_DIALOGUE_IN", 9);
  FIELD_U8(a1, 598) = 0;
  FIELD_U8(a1, 597) = 0;
  return result;
}
