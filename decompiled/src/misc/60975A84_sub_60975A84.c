/* sub_60975A84
 * address: 0x60975A84   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60975A84(int a1, int a2, _DWORD *a3, int a4)
{
  float *v8; // r2
  int v9; // r5
  unsigned int v11[19]; // [sp+Ch] [bp-4Ch] BYREF

  sub_6095849C((int)v11, a2, FIELD_U8(a1, 4), a4, FIELD_U32(a1, 8), (FIELD_U32(a1, 2352) & 8) != 0, (int)a3);
  v8 = *(float **)(a1 + 8);
  if ( v8 )
    sub_6090E560((int)(a3 + 12), a2, v8);
  (*(void (__fastcall **)(_DWORD *, unsigned int *))(*a3 + 36))(a3, v11);
  sub_60956560((int)a3, v11);
  sub_6095849C((int)v11, a2, FIELD_U8(a1, 4), a4, FIELD_U32(a1, 8), (FIELD_U32(a1, 2352) & 8) != 0, (int)a3);
  v9 = (*(int (__fastcall **)(_DWORD *))(*a3 + 16))(a3);
  v11[0] = 0;
  if ( v9 >= 1 )
  {
    do
    {
      (*(void (__fastcall **)(_DWORD *))(*a3 + 64))(a3);
      sub_609565DC(a3, v11);
      ++v11[0];
    }
    while ( (int)v11[0] < v9 );
  }
  sub_6095849C((int)v11, a2, FIELD_U8(a1, 4), a4, FIELD_U32(a1, 8), (FIELD_U32(a1, 2352) & 8) != 0, (int)a3);
  nullsub_126();
  return (*(int (__fastcall **)(_DWORD *, unsigned int *))(*a3 + 56))(a3, v11);
}
