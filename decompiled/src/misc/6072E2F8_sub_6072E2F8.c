/* sub_6072E2F8
 * address: 0x6072E2F8   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072E2F8(int a1)
{
  unsigned __int16 *v2; // r8
  int result; // r0
  int v4; // r9
  float v5; // s16
  int v6; // r0
  int v7; // r10
  int (__fastcall ***v8)(_DWORD, int *); // r7
  char v9; // r12
  int v10; // r6
  float v11; // s20
  int (__fastcall ***v12)(_DWORD, int *); // r6
  char v13; // r12
  int v14; // r7

  v2 = (unsigned __int16 *)(a1 + 6104);
  if ( FIELD_U16(a1, 6104) )
  {
    sub_6072EC94(a1);
    result = *v2;
    v4 = 0;
    FIELD_U16(a1, 6108) = result;
    FIELD_U8(a1, 6100) = 0;
    FIELD_U16(a1, 6110) = 0;
    FIELD_U8(a1, 6102) = 0;
    FIELD_U8(a1, 6103) = 0;
    if ( result )
    {
      v5 = FIELD_F32(dword_60CC6484, 116) + (float)((float)((float)(result - 1) * -0.5) * 30.0);
      do
      {
        v6 = 0;
        if ( (unsigned int)v4 < 0x1E )
          v6 = v4;
        v7 = a1 + 4 * v6;
        v8 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                    ActorMgr__instance + 27168,
                                                    FIELD_U32(v7, 6116));
        if ( ((unsigned int)&dword_60CBD948 & ~(1618142320 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
        {
          dword_60CBD944 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60CBD948);
        }
        v10 = (int)(v8 + 27);
        if ( !(**v8)(v8, &dword_60CBD944) )
          v10 = 108;
        v11 = v5 + (float)((float)v4 * 30.0);
        *(float *)v10 = v11;
        v12 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                     ActorMgr__instance + 27168,
                                                     FIELD_U32(v7, 6236));
        if ( ((unsigned int)&dword_60CBD948 & ~(1618142456 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
        {
          dword_60CBD944 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60CBD948);
        }
        v14 = (int)(v12 + 27);
        ++v4;
        if ( !(**v12)(v12, &dword_60CBD944) )
          v14 = 108;
        *(float *)v14 = v11;
        result = *v2;
      }
      while ( v4 < result );
    }
  }
  else
  {
    FIELD_U8(a1, 6100) = 3;
    FIELD_U8(a1, 6102) = 30;
    return 6102;
  }
  return result;
}
