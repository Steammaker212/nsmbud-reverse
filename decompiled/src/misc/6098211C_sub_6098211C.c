/* sub_6098211C
 * address: 0x6098211C   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098211C(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  int v6; // r5
  int v7; // r0
  void (__fastcall *v8)(int, float); // r6
  float v9; // s0
  _DWORD *result; // r0
  _DWORD *v11; // r5
  void (__fastcall *v12)(_DWORD *, float); // r4
  int v13; // r0

  if ( sub_60980818(a1, (int)"In") )
  {
    v2 = sub_60980684((_DWORD *)a1, (int)"In", FIELD_U32(a1, 72) != 0);
    FIELD_U32(a1, 56) = v2;
    if ( v2 )
    {
      *((_BYTE *)v2 + 51) &= ~0x20u;
      FIELD_U8(a1, 81) = 0;
    }
  }
  if ( sub_60980818(a1, (int)"Out") )
  {
    v3 = sub_60980684((_DWORD *)a1, (int)"Out", 0);
    FIELD_U32(a1, 60) = v3;
    if ( v3 )
      *((_BYTE *)v3 + 51) &= ~0x20u;
  }
  if ( sub_60980818(a1, (int)"LoopRandom") )
  {
    v4 = sub_60980684((_DWORD *)a1, (int)"LoopRandom", 0);
    FIELD_U32(a1, 64) = v4;
    FIELD_U8(a1, 80) |= 2u;
  }
  else if ( sub_60980818(a1, (int)"Loop") )
  {
    v4 = sub_60980684((_DWORD *)a1, (int)"Loop", 0);
    FIELD_U32(a1, 64) = v4;
  }
  else
  {
    v4 = *(_DWORD **)(a1 + 64);
  }
  if ( v4 )
    *((_BYTE *)v4 + 51) &= ~0x20u;
  if ( sub_60980818(a1, (int)"TvDrc") )
  {
    v5 = sub_60980684((_DWORD *)a1, (int)"TvDrc", 0);
    FIELD_U32(a1, 68) = v5;
    if ( v5 )
    {
      *((_BYTE *)v5 + 51) &= ~0x20u;
      v6 = FIELD_U32(a1, 68);
      v7 = FIELD_U32(a1, 72);
      v8 = *(void (__fastcall **)(int, float))(*(_DWORD *)v6 + 96);
      if ( v7 )
        v9 = (float)sub_6098BED8(v7);
      else
        v9 = 0.0;
      v8(v6, v9);
    }
  }
  if ( sub_60980818(a1, (int)"RegionType") )
  {
    result = sub_60980684((_DWORD *)a1, (int)"RegionType", 0);
    v11 = result;
    if ( result )
    {
      *((_BYTE *)result + 51) &= ~0x20u;
      result = *(_DWORD **)(a1 + 72);
      if ( result )
      {
        v12 = *(void (__fastcall **)(_DWORD *, float))(*v11 + 96);
        v13 = sub_608FD200();
LABEL_28:
        v12(v11, (float)v13);
        return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*v11 + 20))(v11);
      }
    }
  }
  else
  {
    result = (_DWORD *)sub_60980818(a1, (int)"RegionLanguageType");
    if ( result )
    {
      result = sub_60980684((_DWORD *)a1, (int)"RegionLanguageType", 0);
      v11 = result;
      if ( result )
      {
        *((_BYTE *)result + 51) &= ~0x20u;
        result = *(_DWORD **)(a1 + 72);
        if ( result )
        {
          v12 = *(void (__fastcall **)(_DWORD *, float))(*v11 + 96);
          v13 = sub_608FD248();
          goto LABEL_28;
        }
      }
    }
  }
  return result;
}
