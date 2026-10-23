/* sub_608C80A8
 * address: 0x608C80A8   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C80A8(int a1, char *a2, int a3, int a4, int *a5)
{
  int result; // r0
  unsigned int v10; // r5
  int v11; // r0
  int v12; // r6
  int v13; // r7
  char *v14; // r10
  char *v15; // r0
  int v16; // r9
  char *v17; // r5
  char *v18; // r0
  int v19; // r5
  _DWORD *v20; // r7
  unsigned int v21; // r3
  int v22; // r1

  result = FIELD_U8(a1, 20);
  if ( !result )
  {
    v10 = (sub_608B0CEC((int)a5) + 3) & 0xFFFFFFFC;
    FIELD_U32(a1, 36) = v10;
    v11 = a3 - v10 * a4;
    v12 = v10;
    v13 = v10;
    if ( v10 )
    {
      v12 = 12 * a4;
      v13 = 12;
    }
    v14 = (char *)(v11 - v12 - 2 * v13);
    FIELD_U32(a1, 24) = sub_608C65AC((char **)a1, a2, v14, 896, 64);
    if ( v10 )
    {
      v15 = &v14[(_DWORD)a2];
      v16 = v10 * a4;
      FIELD_U32(a1, 28) = v15;
      *(_DWORD *)v15 = 0;
      *((_DWORD *)v15 + 1) = 0;
      *((_DWORD *)v15 + 2) = 0;
      v17 = &v15[v13];
      sub_608C64DC(*(_DWORD **)(a1 + 28), (int)&v15[v13], v12, 12);
      v18 = &v17[v12];
      FIELD_U32(a1, 32) = &v17[v12];
      *(_DWORD *)&v17[v12] = 0;
      *((_DWORD *)v18 + 1) = 0;
      *((_DWORD *)v18 + 2) = 0;
      v19 = (int)&v17[v12 + v13];
      v20 = *(_DWORD **)(a1 + 32);
      v21 = sub_608B0CEC((int)a5);
      if ( v21 <= 4 )
        v21 = 4;
      sub_608C64DC(v20, v19, v16, v21);
    }
    FIELD_U8(a1, 20) = 1;
    result = *a5;
    v22 = a5[1];
    FIELD_U32(a1, 40) = *a5;
    FIELD_U32(a1, 44) = v22;
  }
  return result;
}
