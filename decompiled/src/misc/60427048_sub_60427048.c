/* sub_60427048
 * address: 0x60427048   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60427048(_DWORD *a1, float a2)
{
  int v5; // [sp+0h] [bp-28h] BYREF
  int v6; // [sp+4h] [bp-24h] BYREF

  sub_6090B310(dword_60CCF464);
  if ( a1[4514] && a1[4515] )
  {
    sub_60951E50(&v6);
    sub_60951E50(&v5);
    sub_60925854((int)(a1 + 4286), v6, v5, 0xFFFFFFFF, a2);
  }
  a1[4503] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF40);
  a1[4504] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF48);
  a1[4505] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF50);
  a1[4506] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF58);
  a1[4507] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF60);
  a1[4508] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF68);
  a1[4509] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF70);
  a1[4510] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF78);
  a1[4511] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF80);
  a1[4512] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF88);
  a1[4513] = sub_60923DC8(a1 + 4286, *(__int16 *)dword_60CD09C0, &dword_60C9BF90);
  if ( dword_60C8D9DC )
    sub_60238A94(dword_60C8D9DC, 1);
  return sub_6090B32C(dword_60CCF464);
}
