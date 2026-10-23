/* sub_6075A558
 * address: 0x6075A558   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075A558(int a1)
{
  int **v2; // r0
  int *v3; // r5
  void (__fastcall *v4)(int *, int, int); // r3
  int v5; // r0
  int v6; // r2
  int result; // r0
  unsigned int v8; // r0
  int v9; // r5
  _BYTE v10[64]; // [sp+0h] [bp-40h] BYREF

  face_1_ref_78D328();
  Player_setupModelNodes_78E270(a1);
  if ( FIELD_U32(a1, 300) <= 1u )
  {
    v2 = *(int ***)(a1 + 292);
    if ( v2 )
    {
      v3 = *v2;
      v4 = *(void (__fastcall **)(int *, int, int))(**v2 + 136);
      if ( FIELD_U32(a1, 556) )
      {
        v4(v3, 3, 0);
        v5 = *v3;
        v6 = 1;
      }
      else
      {
        v4(v3, 3, 1);
        v5 = *v3;
        v6 = 0;
      }
      (*(void (__fastcall **)(int *, int, int))(v5 + 136))(v3, 2, v6);
    }
  }
  result = FIELD_U8(a1, 564);
  if ( FIELD_U8(a1, 564) )
  {
    v8 = FIELD_U32(a1, 560);
    if ( v8 >= 2 )
      v8 = 0;
    v9 = **(_DWORD **)(a1 + 4 * v8 + 548);
    (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 24) + 108))(
      **(_DWORD **)(a1 + 24),
      FIELD_U32(a1, 368),
      v10);
    (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)v9 + 60))(v9, v10);
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 52))(v9);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 56))(v9);
  }
  return result;
}
