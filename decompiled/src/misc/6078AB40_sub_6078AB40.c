/* sub_6078AB40
 * address: 0x6078AB40   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078AB40(int result, int a2, unsigned int a3, int a4)
{
  int v6; // r4
  unsigned int v7; // r0
  int v8; // r7
  int v9; // r6
  int v10; // r8
  int v11; // r7
  bool v12; // zf
  int v13; // r0
  int v14; // [sp+8h] [bp-28h]

  v6 = result;
  if ( a3 != -1 )
  {
    if ( a2 == 2 )
    {
      return AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, (char)a3, 8, 0, 0);
    }
    else
    {
      if ( a4 != 1 )
        goto LABEL_28;
      v7 = 0;
      if ( a3 < 4 )
        v7 = a3;
      v8 = *(_DWORD *)(v6 + 4 * v7 + 32);
      if ( v8 )
      {
        sub_607AF358(*(_DWORD *)(v6 + 4 * v7 + 32));
        FIELD_U8(v8, 13060) = 0;
      }
      v9 = 0;
      v14 = 0;
      do
      {
        if ( a3 != v9 && (FIELD_U16(v6, 66) & (unsigned __int16)(1 << v9)) != 0 )
        {
          v10 = v6 + 4 * v9;
          v11 = FIELD_U32(v10, 32);
          if ( v11 )
          {
            if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v11 + 636))(FIELD_U32(v10, 32)) != 1
              || !(*(int (__fastcall **)(int, int))(*(_DWORD *)v11 + 640))(v11, 3)
              && !(*(int (__fastcall **)(int, int))(*(_DWORD *)v11 + 640))(v11, 5) )
            {
              if ( FIELD_U32(v10, 32) )
              {
                v12 = sub_607AF368() == 0;
                v13 = v14;
                if ( !v12 )
                  v13 = v14 + 1;
                v14 = v13;
              }
            }
          }
        }
        ++v9;
      }
      while ( v9 != 4 );
      if ( v14 )
      {
        FIELD_U32(v6, 180) = v14;
        sub_6078AD40(v6);
        result = sub_6040E538(LevelInfo_instance);
        if ( !result )
        {
          result = dword_60C99DD4;
          if ( dword_60C99DD4 )
          {
            if ( !FIELD_U32(v6, 184) )
              sub_603FFD24(dword_60C99DD4 + 852);
            result = 6;
            FIELD_U32(v6, 184) = 6;
          }
        }
      }
      else
      {
LABEL_28:
        if ( a2 == 1 )
          return sub_604005D0(AreaRumbleMgr_instance, a3, 3, 3, 0, 0);
        else
          return AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, (char)a3, 4, 0, 0);
      }
    }
  }
  return result;
}
