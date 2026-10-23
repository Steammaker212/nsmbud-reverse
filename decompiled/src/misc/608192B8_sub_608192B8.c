/* sub_608192B8
 * address: 0x608192B8   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608192B8(int a1, unsigned int *a2)
{
  unsigned int *v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int result; // r0
  nn__oe *v8[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( nn__oe__TryPopNotificationMessage((nn__oe *)v8, a2) == 1 )
  {
    do
    {
      if ( v8[0] == (nn__oe *)16 )
      {
        FIELD_U32(a1, 216) = 10;
      }
      else if ( v8[0] == (nn__oe *)30 )
      {
        FIELD_U32(a1, 208) = nn__oe__GetOperationMode((nn__oe *)0x1E);
      }
      else if ( v8[0] == (nn__oe *)31 )
      {
        FIELD_U32(a1, 212) = nn__oe__GetPerformanceMode((nn__oe *)0x1F);
      }
    }
    while ( nn__oe__TryPopNotificationMessage((nn__oe *)v8, v3) );
  }
  v4 = sub_60459990(dword_60C9CFB8);
  FIELD_U8(a1, 220) = v4;
  FIELD_U8(a1, 222) = 0;
  if ( v4 )
  {
    if ( FIELD_U8(dword_60C99E34, 7765) )
    {
      sub_603FF530(dword_60C99E34);
      if ( dword_60C99E68 )
        sub_60401F34(dword_60C99E68);
      if ( !FIELD_U8(dword_60C99E34, 7764) )
      {
        if ( FIELD_U8(dword_60C99E34, 7768) )
        {
          FIELD_U8(a1, 221) = 1;
          FIELD_U32(a1, 216) = 0;
        }
        else
        {
          v6 = dword_60C9CFB8;
          FIELD_U8(dword_60C9CFB8, 83) = 1;
          FIELD_U32(a1, 216) = 0;
          sub_6045A4F4(v6);
        }
      }
      FIELD_U8(a1, 222) = 1;
    }
    else
    {
      v5 = FIELD_U32(a1, 216);
      if ( v5 )
        FIELD_U32(a1, 216) = v5 - 1;
    }
  }
  else if ( dword_60C99E68 )
  {
    sub_603FF5A0(dword_60C99E34, 0, 0);
    FIELD_U8(dword_60CC6BE4, 220) = 1;
    FIELD_U8(dword_60C9CFB8, 83) = 0;
    sub_603FF530(dword_60C99E34);
    sub_60401F34(dword_60C99E68);
    FIELD_U8(a1, 222) = 1;
  }
  ++FIELD_U64(a1, 200);
  sub_60023864();
  if ( dword_60CD0A20 )
    sub_60952160();
  result = dword_60C9C0FC;
  if ( dword_60C9C0FC )
    return sub_6042B348(dword_60C9C0FC);
  return result;
}
