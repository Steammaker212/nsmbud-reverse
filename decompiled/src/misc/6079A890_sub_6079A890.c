/* sub_6079A890
 * address: 0x6079A890   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079A890(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int result; // r0
  int v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch]

  v2 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330]);
  v6 = dword_60B0C374[2 * v2];
  v7 = dword_60B0C374[2 * v2 + 1];
  if ( sub_6075EDE0((int)a1) )
  {
    v3 = dword_60B0C38C[2 * (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330]) + 1];
  }
  else
  {
    if ( !sub_6075EDF8((int)a1) )
      goto LABEL_6;
    v6 = 0x40000000;
    v3 = 1101004800;
  }
  v7 = v3;
LABEL_6:
  v4 = sub_601557EC((int)(a1 + 332), (float *)&v6);
  result = 0;
  if ( v4 == 1 )
  {
    a1[1726] |= 0x4000000u;
    return 1;
  }
  return result;
}
