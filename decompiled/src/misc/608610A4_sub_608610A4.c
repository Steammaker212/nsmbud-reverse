/* sub_608610A4
 * address: 0x608610A4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608610A4(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r4
  int v8; // r5
  int *v9; // r4
  int v10; // r7
  int v11; // r0
  void (__fastcall ***v12)(_DWORD); // r5

  sub_608587E8(a1, a2);
  v4 = FIELD_U32(a1, 224);
  if ( v4 )
    sub_60855BF0(v4);
  v5 = FIELD_S8(a1, 213);
  v6 = FIELD_U32(a1, 216);
  if ( v5 < 1 )
  {
    v8 = FIELD_S8(a1, 213);
    if ( !v6 )
      goto LABEL_16;
  }
  else
  {
    v7 = 0;
    do
    {
      sub_60867638(*(_DWORD *)(v6 + 8 * v7 + 4), a2);
      v8 = FIELD_S8(a1, 213);
      v6 = FIELD_U32(a1, 216);
      ++v7;
    }
    while ( v7 < v8 );
    LOBYTE(v5) = FIELD_U8(a1, 213);
    if ( !v6 )
      goto LABEL_16;
  }
  if ( (char)v5 >= 1 )
  {
    v9 = (int *)(v6 + 4);
    do
    {
      v10 = *v9;
      if ( *v9 && (FIELD_U8(v10, 50) & 1) == 0 )
      {
        (**(void (__fastcall ***)(int))v10)(*v9);
        sub_60855BF0(v10);
      }
      *v9 = 0;
      v9 += 2;
      --v8;
    }
    while ( v8 );
  }
  sub_60855BF0(v6);
LABEL_16:
  v11 = FIELD_U32(a1, 220);
  if ( v11 && (FIELD_U8(v11, 50) & 1) == 0 )
  {
    sub_60867638(v11, a2);
    v12 = *(void (__fastcall ****)(_DWORD))(a1 + 220);
    if ( v12 )
    {
      (**v12)(FIELD_U32(a1, 220));
      sub_60855BF0((int)v12);
    }
    FIELD_U32(a1, 220) = 0;
  }
  return sub_60864FB0(a1 + 204);
}
