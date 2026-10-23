/* sub_604F31CC
 * address: 0x604F31CC   size: 1408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604F31CC(int a1, int a2)
{
  _BOOL4 result; // r0
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r0
  int v15; // r1

  if ( a2 == 14 )
  {
    if ( !FIELD_U8(a1, 58813) || !sub_60405B04(a1 + 56124) || (result = 1, (FIELD_U32(a1, 56628) | 1) == 9) )
    {
      if ( !FIELD_U8(a1, 61801) || !sub_60405B04(a1 + 59112) || (result = 1, (FIELD_U32(a1, 59616) | 1) == 9) )
      {
        if ( !FIELD_U8(a1, 64789) || !sub_60405B04(a1 + 62100) || (result = 1, (FIELD_U32(a1, 62604) | 1) == 9) )
        {
          if ( !FIELD_U8(a1, 67777) || !sub_60405B04(a1 + 65088) || (result = 1, (FIELD_U32(a1, 65592) | 1) == 9) )
          {
            if ( !FIELD_U8(a1, 70765)
              || !sub_60405B04(a1 + 68076)
              || (result = 1, (FIELD_U32(a1, 68580) | 1) == 9) )
            {
              if ( !FIELD_U8(a1, 73753) )
                return 0;
              if ( !sub_60405B04(a1 + 71064) )
                return 0;
              result = 1;
              if ( (FIELD_U32(a1, 71568) | 1) == 9 )
                return 0;
            }
          }
        }
      }
    }
  }
  else
  {
    if ( a2 == 2 )
    {
      if ( FIELD_U8(a1, 58813) )
      {
        result = 1;
        if ( (*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 56140) + 4) + 209) & 8) == 0 )
          return result;
      }
      if ( FIELD_U8(a1, 61801) )
      {
        result = 1;
        if ( (*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 59128) + 4) + 209) & 8) == 0 )
          return result;
      }
      if ( FIELD_U8(a1, 64789) )
      {
        result = 1;
        if ( (*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 62116) + 4) + 209) & 8) == 0 )
          return result;
      }
      if ( FIELD_U8(a1, 67777) )
      {
        result = 1;
        if ( (*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 65104) + 4) + 209) & 8) == 0 )
          return result;
      }
      if ( FIELD_U8(a1, 70765) )
      {
        result = 1;
        if ( (*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 68092) + 4) + 209) & 8) == 0 )
          return result;
      }
      if ( FIELD_U8(a1, 73753) )
      {
        result = 1;
        if ( (*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 71080) + 4) + 209) & 8) == 0 )
          return result;
      }
      return 0;
    }
    if ( !FIELD_U8(a1, 58813)
      || sub_60405ADC(a1 + 56124)
      || (v5 = FIELD_U32(a1, 56628), v5 > 9)
      || dword_60B03338[v5] == a2
      || (v6 = byte_60B03258[15 * v5 + a2], result = 1, !v6) )
    {
      if ( !FIELD_U8(a1, 61801)
        || sub_60405ADC(a1 + 59112)
        || (v7 = FIELD_U32(a1, 59616), v7 > 9)
        || dword_60B03338[v7] == a2
        || (v8 = byte_60B03258[15 * v7 + a2], result = 1, !v8) )
      {
        if ( !FIELD_U8(a1, 64789)
          || sub_60405ADC(a1 + 62100)
          || (v14 = FIELD_U32(a1, 62604), v14 > 9)
          || dword_60B03338[v14] == a2
          || (v15 = byte_60B03258[15 * v14 + a2], result = 1, !v15) )
        {
          if ( !FIELD_U8(a1, 67777)
            || sub_60405ADC(a1 + 65088)
            || (v9 = FIELD_U32(a1, 65592), v9 > 9)
            || dword_60B03338[v9] == a2
            || (v10 = byte_60B03258[15 * v9 + a2], result = 1, !v10) )
          {
            if ( !FIELD_U8(a1, 70765)
              || sub_60405ADC(a1 + 68076)
              || (v11 = FIELD_U32(a1, 68580), v11 > 9)
              || dword_60B03338[v11] == a2
              || (v12 = byte_60B03258[15 * v11 + a2], result = 1, !v12) )
            {
              if ( FIELD_U8(a1, 73753) )
              {
                if ( !sub_60405ADC(a1 + 71064) )
                {
                  v13 = FIELD_U32(a1, 71568);
                  if ( v13 <= 9 && dword_60B03338[v13] != a2 )
                    return byte_60B03258[15 * v13 + a2] != 0;
                }
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}
