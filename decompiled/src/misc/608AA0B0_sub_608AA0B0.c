/* sub_608AA0B0
 * address: 0x608AA0B0   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AA0B0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r7
  int v11; // r1
  unsigned __int8 *v12; // r0
  bool v13; // zf
  bool v15; // zf
  int v17; // [sp+Ch] [bp-24h] BYREF
  int v18; // [sp+10h] [bp-20h]
  char *s; // [sp+14h] [bp-1Ch]

  v7 = 0;
  v17 = -1;
  v18 = -1;
  s = 0;
  if ( sub_608B2448(a1[1], a2, &v17, 0) == 1 )
  {
    v12 = (unsigned __int8 *)a1[2];
    v13 = v12 == 0;
    if ( v12 )
    {
      v11 = v12[4];
      v13 = v11 == 0;
    }
    if ( !v13 )
      (*(void (__fastcall **)(unsigned __int8 *, int, int *, _DWORD))(*(_DWORD *)v12 + 48))(v12, a2, &v17, 0);
    if ( s )
      return sub_608AA198((int)a1, a3, a4, s, a5, a6);
    v15 = v17 == -1;
    if ( v17 != -1 )
    {
      v11 = v18;
      v15 = v18 == -1;
    }
    if ( !v15 )
      return (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 28))(a1, a3, a4, a1[163] + v11, v17);
  }
  return v7;
}
