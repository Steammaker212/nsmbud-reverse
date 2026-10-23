/* sub_60060194
 * address: 0x60060194   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60060194(_DWORD *a1)
{
  _DWORD *v1; // r1
  _DWORD *v2; // r4
  int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r1
  int v6; // r5
  _DWORD *v7; // r6
  int *v8; // r1
  unsigned int v9; // r0
  int v10; // r0
  int *v11; // r1
  unsigned int v12; // r0
  int result; // r0

  v2 = a1 + 1801;
  v1 = (_DWORD *)a1[1801];
  v3 = v1[3];
  v4 = v1[2];
  v5 = v1[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 20);
  v7 = a1 + 1959;
  (*(void (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C80E70);
  v8 = *(int **)(*v2 + 12);
  v9 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v9 )
    v8 += v9;
  v10 = *v8;
  FIELD_U32(v10, 20) = v6;
  FIELD_U32(v10, 28) |= 2u;
  v11 = *(int **)(*v7 + 12);
  v12 = *(_DWORD *)(*v7 + 68);
  if ( *(_DWORD *)(*v7 + 8) > v12 )
    v11 += v12;
  result = *v11;
  FIELD_U32(result, 20) = v6;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
