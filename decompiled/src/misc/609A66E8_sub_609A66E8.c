/* sub_609A66E8
 * address: 0x609A66E8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A66E8(int a1, _DWORD *a2, int a3, void *a4)
{
  void *v4; // r9
  int v8; // r6
  _DWORD *v9; // r1
  void *v10; // r7
  const void *v11; // r10
  int v12; // r0
  signed int v13; // r4
  bool v14; // cc
  signed int v15; // r0

  v4 = a4;
  if ( !a4 )
    v4 = *(void **)(a1 + 136);
  v8 = operator_new_8DE25C(0x8Cu, v4, 4);
  sub_609A59D0(v8);
  v9 = (_DWORD *)v8;
  if ( v8 )
    v9 = (_DWORD *)(v8 + 4);
  sub_608DEFB0(a1 + 4, v9);
  v10 = *(void **)(v8 + 24);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v11 = (const void *)a2[1];
  if ( v10 != v11 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v12 = a2[1];
    v13 = 0;
    while ( *(_BYTE *)(v12 + v13) )
    {
      if ( !*(_BYTE *)(v12 + v13 + 1) )
      {
        ++v13;
        break;
      }
      if ( !*(_BYTE *)(v12 + v13 + 2) )
      {
        v13 += 2;
        break;
      }
      v14 = v13 + 2 < 0x80000;
      v13 += 3;
      if ( !v14 )
      {
        v13 = 0;
        break;
      }
    }
    v15 = FIELD_U32(v8, 28);
    if ( v13 >= v15 )
      v13 = v15 - 1;
    qmemcpy(v10, v11, v13);
    *((_BYTE *)v10 + v13) = 0;
  }
  if ( **(_BYTE **)(a3 + 4) )
    sub_609A6570(v8, (const void **)a3, (int)v4);
  else
    sub_609A5C1C(v8, 0, 0, 0);
  return v8;
}
