/* sub_60129174
 * address: 0x60129174   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60129174(_DWORD *a1)
{
  unsigned int *v1; // r5
  unsigned int result; // r0
  _DWORD *v3; // r1
  _DWORD *v4; // r6
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r1
  int v8; // r7
  _DWORD *v9; // r4
  int v10; // r4
  int *v11; // r1
  unsigned int v12; // r0
  int v13; // r0

  v1 = a1 + 2031;
  if ( ((0x15u >> a1[2031]) & 1) == 0 )
    return (*(int (**)(void))(*a1 + 192))();
  v4 = a1 + 1774;
  v3 = (_DWORD *)a1[1774];
  v5 = v3[3];
  v6 = v3[2];
  v7 = v3[17];
  if ( v6 > v7 )
    v5 += 4 * v7;
  v8 = *(_DWORD *)(*(_DWORD *)v5 + 20);
  v9 = a1 + 1524;
  (*(void (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C86EBC);
  v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v9 + 8))(*v9);
  if ( v10 == (*(int (**)(void))(dword_60C86E9C + 8))() )
  {
    v11 = *(int **)(*v4 + 12);
    v12 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v12 )
      v11 += v12;
    v13 = *v11;
    FIELD_U32(v13, 20) = v8;
    FIELD_U32(v13, 28) |= 2u;
  }
  result = *v1 + 1;
  if ( result > 5 )
    result = 0;
  *v1 = result;
  return result;
}
