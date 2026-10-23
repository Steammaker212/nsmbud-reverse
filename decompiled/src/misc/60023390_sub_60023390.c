/* sub_60023390
 * address: 0x60023390   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60023390(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 28);
  if ( v2 >= 1 )
  {
    v3 = v2 - 1;
    FIELD_U32(a1, 28) = v3;
    if ( !v3 )
      sub_60023294(a1);
  }
  if ( FIELD_U8(a1, 16) )
  {
    if ( !FIELD_U8(a1, 17) )
    {
      FIELD_U8(a1, 17) = 1;
      sub_60817EC8(dword_60CC6B68);
    }
  }
  else if ( !FIELD_U8(a1, 7) )
  {
    FIELD_U8(a1, 18) = 0;
    if ( FIELD_U8(a1, 6) )
    {
      FIELD_U8(a1, 7) = 1;
      sub_608163C0(dword_60CC6B68);
    }
  }
  if ( FIELD_U8(a1, 17) )
  {
    if ( !FIELD_U8(a1, 16) && sub_60815F1C(dword_60CC6B68) == 1 )
    {
      FIELD_U8(a1, 17) = 0;
      sub_60817F90(dword_60CC6B68);
    }
  }
  else if ( FIELD_U8(a1, 7) )
  {
    if ( dword_60C9CF0C && FIELD_U32(dword_60C9CF0C, 1316) == 2 )
    {
      v4 = FIELD_U32(a1, 12);
      if ( FIELD_U8(a1, 6) )
      {
        if ( v4 == 1 )
        {
          FIELD_U32(a1, 12) = 2;
          v5 = FIELD_U32(a1, 8);
          if ( v5 >= 1 )
            FIELD_U32(a1, 8) = v5 - 1;
        }
      }
      else
      {
        if ( v4 == 2 )
          FIELD_U32(a1, 12) = 1;
        v6 = FIELD_U32(a1, 12);
        if ( v6 == 1 )
        {
          v7 = FIELD_U32(a1, 8);
          if ( v7 >= 1 )
            FIELD_U32(a1, 8) = --v7;
          if ( !v7 && sub_60815F1C(dword_60CC6B68) == 1 )
          {
            FIELD_U8(a1, 7) = 0;
            if ( !FIELD_U8(a1, 18) )
              sub_6081643C(dword_60CC6B68);
            FIELD_U32(a1, 8) = -1;
            FIELD_U32(a1, 12) = 0;
          }
        }
        else if ( !v6 )
        {
          FIELD_U32(a1, 8) = 2;
          FIELD_U32(a1, 12) = 1;
        }
      }
    }
    else if ( !FIELD_U8(a1, 6) && sub_60815F1C(dword_60CC6B68) == 1 )
    {
      FIELD_U8(a1, 7) = 0;
      if ( !FIELD_U8(a1, 18) )
        sub_6081643C(dword_60CC6B68);
    }
  }
  v8 = FIELD_U16(a1, 24);
  FIELD_U16(a1, 26) = v8;
  v9 = FIELD_U16(a1, 22);
  FIELD_U16(a1, 24) = v9;
  if ( !v8 && v9 )
    sub_608175F8(dword_60CC6B68);
  (*(void (__fastcall **)(int))(*(_DWORD *)SoundSystem_instance + 16))(SoundSystem_instance);
  result = FIELD_U16(a1, 26);
  if ( FIELD_U16(a1, 26) )
  {
    result = FIELD_U16(a1, 24);
    if ( !FIELD_U16(a1, 24) )
      return sub_60817690(dword_60CC6B68);
  }
  return result;
}
