/* EmitterSet_has_been_already_deleted_ref_88FFA4
 * address: 0x6088FFA4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall EmitterSet_has_been_already_deleted_ref_88FFA4(int a1, int a2)
{
  int v3; // r8
  int v4; // r7
  int v5; // r6
  int v6; // r1
  int v7; // r0
  int v8; // r2
  int v9; // r7
  int v10; // r6
  int v11; // r1
  int v12; // r0
  int v13; // r2

  v3 = a1 + 4 * a2;
  v4 = FIELD_U32(v3, 116);
  if ( v4 )
  {
    do
    {
      v5 = FIELD_U32(v4, 416);
      if ( FIELD_U8(v4, 8) )
      {
        nn__os__LockMutex(a1 + 3376);
        v6 = FIELD_U32(a1, 1144);
        v7 = FIELD_U32(a1, 1140);
        if ( v6 < 1 )
        {
LABEL_7:
          *(_DWORD *)(v7 + 4 * v6) = v4;
          ++FIELD_U32(a1, 1144);
        }
        else
        {
          v8 = 0;
          while ( *(_DWORD *)(v7 + 4 * v8) != v4 )
          {
            if ( ++v8 >= v6 )
              goto LABEL_7;
          }
        }
        nn__os__UnlockMutex(a1 + 3376);
      }
      else
      {
        debugPrintRelated3("EmitterSet has been already deleted.\n");
      }
      v4 = v5;
    }
    while ( v5 );
  }
  v9 = FIELD_U32(v3, 628);
  if ( v9 )
  {
    do
    {
      v10 = FIELD_U32(v9, 416);
      if ( FIELD_U8(v9, 8) )
      {
        nn__os__LockMutex(a1 + 3376);
        v11 = FIELD_U32(a1, 1144);
        v12 = FIELD_U32(a1, 1140);
        if ( v11 < 1 )
        {
LABEL_17:
          *(_DWORD *)(v12 + 4 * v11) = v9;
          ++FIELD_U32(a1, 1144);
        }
        else
        {
          v13 = 0;
          while ( *(_DWORD *)(v12 + 4 * v13) != v9 )
          {
            if ( ++v13 >= v11 )
              goto LABEL_17;
          }
        }
        nn__os__UnlockMutex(a1 + 3376);
      }
      else
      {
        debugPrintRelated3("EmitterSet has been already deleted.\n");
      }
      FIELD_U8(v9, 11) = 0;
      v9 = v10;
    }
    while ( v10 );
  }
}
