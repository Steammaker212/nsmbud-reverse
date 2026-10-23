/* Player__vfAC
 * address: 0x60799A38   size: 224   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_60799A38(_DWORD *a1)
{
  int v2; // r5
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  int v7; // r1
  int v8; // r5
  bool v9; // zf

  v2 = a1[304];
  if ( (v2 & 0x90) == 0x10 )
    return (char *)&unk_60B0C3A4;
  if ( !sub_6075EDF8((int)a1) )
  {
    if ( !sub_6075EE0C((int)a1) )
      goto LABEL_8;
    v4 = a1[330];
    v5 = v4 == 0;
    if ( v4 )
      v5 = v4 == 3;
    if ( !v5 )
    {
LABEL_8:
      if ( (v2 & 8) != 0 )
        return (char *)&unk_60B0C3C8;
    }
  }
  v6 = a1[2840];
  v7 = FIELD_U32(v6, 196);
  if ( (v7 & 1) != 0 )
  {
    v8 = a1[330] != 3;
  }
  else
  {
    v8 = 2;
    v9 = (FIELD_U32(v6, 196) & 4) == 0;
    if ( (v7 & 4) == 0 )
    {
      v8 = 3;
      v9 = (FIELD_U32(v6, 196) & 0x10) == 0;
    }
    if ( v9 )
    {
      v8 = 0;
      if ( FIELD_U32(v6, 28) == 122 )
        v8 = 4;
    }
  }
  return (char *)*(&off_60C25230 + (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330])) + 36 * v8;
}
