/* sub_603E8CD4
 * address: 0x603E8CD4   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603E8CD4(int a1, StageActor *a2)
{
  char v4; // r12
  _BOOL4 result; // r0
  char v6; // r12
  signed int v7; // r1
  bool v8; // zf
  int ProfileId; // r1
  bool v10; // zf
  bool v11; // zf
  bool v12; // zf
  bool v13; // zf

  if ( Actor__getProfileId(&FIELD_U32(a2, 0x0)) == 442 )
  {
    if ( ((unsigned int)&dword_60C7B408 & ~(1614712076 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( !a2 )
      return 0;
    if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(a2, 0x0).vtable)(a2, &dword_60C7B404) != 1 )
      return 0;
    result = 1;
    if ( (unsigned __int8)FIELD_U8(a2, 0x54) == 255 )
      return 0;
  }
  else
  {
    if ( Actor__getProfileId(&FIELD_U32(a2, 0x0)) == 442 || Actor__getProfileId(&FIELD_U32(a2, 0x0)) == 444 || Actor__getProfileId(&FIELD_U32(a2, 0x0)) == 443 )
      goto LABEL_23;
    if ( ((unsigned int)&dword_60C7B364 & ~(1614712288 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !a2 || (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(a2, 0x0).vtable)(a2, &StageActor_RTTI) != 1 )
      goto LABEL_23;
    v7 = sub_600005D4(a2, 0);
    result = 1;
    v8 = v7 == 0;
    if ( !v7 )
      v8 = (FIELD_U8(a2, 0x21A) & 1) == 0;
    if ( v8 && (!FIELD_U8(a1, 25) || FIELD_U8(a2, 0x215) != 4) )
    {
LABEL_23:
      ProfileId = Actor__getProfileId(&FIELD_U32(a2, 0x0));
      result = 1;
      if ( ProfileId != 444 )
      {
        v10 = ProfileId == 443;
        if ( ProfileId != 443 )
          v10 = ProfileId == 441;
        if ( !v10 )
        {
          v11 = ProfileId == 189;
          if ( ProfileId != 189 )
            v11 = ProfileId == 687;
          if ( !v11 )
          {
            v12 = ProfileId == 821;
            if ( ProfileId != 821 )
              v12 = ProfileId == 822;
            if ( !v12 )
            {
              v13 = ProfileId == 824;
              if ( ProfileId != 824 )
                v13 = ProfileId == 371;
              if ( !v13 )
                return ProfileId == 853;
            }
          }
        }
      }
    }
  }
  return result;
}
