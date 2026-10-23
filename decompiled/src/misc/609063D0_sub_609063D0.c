/* sub_609063D0
 * address: 0x609063D0   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_609063D0(_DWORD *a1, int (__fastcall ***a2)(_DWORD, _BYTE *, int))
{
  int v4; // r6
  float v5; // s16
  bool v6; // cc
  float v8; // [sp+4h] [bp-1Ch] BYREF

  sub_609080F8(&unk_60CCF41C);
  v4 = 0;
  v8 = 0.0;
  sub_60905918(a1, a2);
  (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
  v5 = 0.0;
  while ( *(_BYTE *)(dword_60CCF014 + v4) )
  {
    if ( !*(_BYTE *)(dword_60CCF014 + v4 + 1) )
    {
      if ( v4 == -1 )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( !*(_BYTE *)(dword_60CCF014 + v4 + 2) )
    {
      v4 += 2;
      break;
    }
    v6 = v4 + 2 < 0x80000;
    v4 += 3;
    if ( !v6 )
      goto LABEL_12;
  }
  if ( !v4 )
    goto LABEL_12;
LABEL_11:
  (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
  sscanf((const char *)dword_60CCF014, "%f", &v8);
  v5 = v8;
LABEL_12:
  sub_60908100(&unk_60CCF41C);
  return v5;
}
