/* sub_60985868
 * address: 0x60985868   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_60985868(_WORD *a1, int a2, int a3, _BYTE *a4, int a5, int a6, int a7)
{
  int v11; // r0
  _WORD *v12; // r5
  int v14; // [sp+18h] [bp-1038h] BYREF
  int v15; // [sp+1Ch] [bp-1034h] BYREF
  int (**v16)(); // [sp+20h] [bp-1030h] BYREF
  int *v17; // [sp+24h] [bp-102Ch]
  int v18; // [sp+28h] [bp-1028h]
  int v19; // [sp+2Ch] [bp-1024h] BYREF

  if ( a2 )
  {
    v17 = &v19;
    v16 = &off_60BFCA1C;
    v18 = 2048;
    sub_608FDDB4((int)&v16);
    *(_WORD *)v17 = 0;
    v16 = &off_60C5FCF8;
    v15 = 0;
    v14 = 0;
    v11 = (*(int (__fastcall **)(_WORD *, int (***)(), int *, int *, int, int, int, int, int))(*(_DWORD *)a1 + 164))(
            a1,
            &v16,
            &v15,
            &v14,
            a2,
            a3,
            a5,
            a6,
            a7);
    if ( a4 )
    {
      if ( v11 != 1 )
        LOBYTE(v11) = 0;
      *a4 = v11;
    }
    ((void (__fastcall *)(int (***)()))v16[3])(&v16);
    v12 = sub_6085E498(a1, v17, 0, (unsigned __int16)v15);
    (*(void (__fastcall **)(_WORD *, _DWORD))(*(_DWORD *)a1 + 168))(a1, 0);
    return v12;
  }
  else
  {
    if ( a4 )
      *a4 = 0;
    off_60C5CB38[3]();
    return sub_6085E498(a1, off_60C5CB3C, 0, 0);
  }
}
