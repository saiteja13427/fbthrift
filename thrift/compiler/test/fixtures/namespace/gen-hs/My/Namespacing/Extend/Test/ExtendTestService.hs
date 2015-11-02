{-# LANGUAGE DeriveDataTypeable #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-missing-fields #-}
{-# OPTIONS_GHC -fno-warn-missing-signatures #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing #-}
{-# OPTIONS_GHC -fno-warn-unused-imports #-}
{-# OPTIONS_GHC -fno-warn-unused-matches #-}

-----------------------------------------------------------------
-- Autogenerated by Thrift
--                                                             --
-- DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
--  @generated
-----------------------------------------------------------------

module My.Namespacing.Extend.Test.ExtendTestService where
import Prelude ( Bool(..), Enum, Float, IO, Double, String, Maybe(..),
                 Eq, Show, Ord,
                 concat, error, fromIntegral, fromEnum, length, map,
                 maybe, not, null, otherwise, return, show, toEnum,
                 enumFromTo, Bounded, minBound, maxBound,
                 (.), (&&), (||), (==), (++), ($), (-), (>>=), (>>))

import Control.Applicative (ZipList(..), (<*>))
import Control.Exception
import Control.Monad ( liftM, ap, when )
import Data.ByteString.Lazy (ByteString)
import Data.Functor ( (<$>) )
import Data.Hashable
import Data.Int
import Data.Maybe (catMaybes)
import Data.Text.Lazy.Encoding ( decodeUtf8, encodeUtf8 )
import qualified Data.Text.Lazy as LT
import Data.Typeable ( Typeable )
import qualified Data.HashMap.Strict as Map
import qualified Data.HashSet as Set
import qualified Data.Vector as Vector
import Test.QuickCheck.Arbitrary ( Arbitrary(..) )
import Test.QuickCheck ( elements )

import Thrift hiding (ProtocolExnType(..))
import qualified Thrift (ProtocolExnType(..))
import Thrift.Types
import Thrift.Arbitraries

import qualified My.Namespacing.Test.Hsmodule_Types as Hsmodule_Types


import qualified My.Namespacing.Test.HsTestService
import My.Namespacing.Extend.Test.Extend_Types
import qualified My.Namespacing.Extend.Test.ExtendTestService_Iface as Iface
-- HELPER FUNCTIONS AND STRUCTURES --

data Check_args = Check_args
  { check_args_struct1 :: Hsmodule_Types.HsFoo
  } deriving (Show,Eq,Typeable)
instance Hashable Check_args where
  hashWithSalt salt record = salt   `hashWithSalt` check_args_struct1 record  
instance Arbitrary Check_args where 
  arbitrary = liftM Check_args (arbitrary)
  shrink obj | obj == default_Check_args = []
             | otherwise = catMaybes
    [ if obj == default_Check_args{check_args_struct1 = check_args_struct1 obj} then Nothing else Just $ default_Check_args{check_args_struct1 = check_args_struct1 obj}
    ]
from_Check_args :: Check_args -> ThriftVal
from_Check_args record = TStruct $ Map.fromList $ catMaybes
  [ (\_v2 -> Just (1, ("struct1",Hsmodule_Types.from_HsFoo _v2))) $ check_args_struct1 record
  ]
write_Check_args :: (Protocol p, Transport t) => p t -> Check_args -> IO ()
write_Check_args oprot record = writeVal oprot $ from_Check_args record
encode_Check_args :: (Protocol p, Transport t) => p t -> Check_args -> ByteString
encode_Check_args oprot record = serializeVal oprot $ from_Check_args record
to_Check_args :: ThriftVal -> Check_args
to_Check_args (TStruct fields) = Check_args{
  check_args_struct1 = maybe (check_args_struct1 default_Check_args) (\(_,_val4) -> (case _val4 of {TStruct _val5 -> (Hsmodule_Types.to_HsFoo (TStruct _val5)); _ -> error "wrong type"})) (Map.lookup (1) fields)
  }
to_Check_args _ = error "not a struct"
read_Check_args :: (Transport t, Protocol p) => p t -> IO Check_args
read_Check_args iprot = to_Check_args <$> readVal iprot (T_STRUCT typemap_Check_args)
decode_Check_args :: (Protocol p, Transport t) => p t -> ByteString -> Check_args
decode_Check_args iprot bs = to_Check_args $ deserializeVal iprot (T_STRUCT typemap_Check_args) bs
typemap_Check_args :: TypeMap
typemap_Check_args = Map.fromList [("struct1",(1,(T_STRUCT Hsmodule_Types.typemap_HsFoo)))]
default_Check_args :: Check_args
default_Check_args = Check_args{
  check_args_struct1 = Hsmodule_Types.default_HsFoo}
data Check_result = Check_result
  { check_result_success :: Bool
  } deriving (Show,Eq,Typeable)
instance Hashable Check_result where
  hashWithSalt salt record = salt   `hashWithSalt` check_result_success record  
instance Arbitrary Check_result where 
  arbitrary = liftM Check_result (arbitrary)
  shrink obj | obj == default_Check_result = []
             | otherwise = catMaybes
    [ if obj == default_Check_result{check_result_success = check_result_success obj} then Nothing else Just $ default_Check_result{check_result_success = check_result_success obj}
    ]
from_Check_result :: Check_result -> ThriftVal
from_Check_result record = TStruct $ Map.fromList $ catMaybes
  [ (\_v8 -> Just (0, ("success",TBool _v8))) $ check_result_success record
  ]
write_Check_result :: (Protocol p, Transport t) => p t -> Check_result -> IO ()
write_Check_result oprot record = writeVal oprot $ from_Check_result record
encode_Check_result :: (Protocol p, Transport t) => p t -> Check_result -> ByteString
encode_Check_result oprot record = serializeVal oprot $ from_Check_result record
to_Check_result :: ThriftVal -> Check_result
to_Check_result (TStruct fields) = Check_result{
  check_result_success = maybe (check_result_success default_Check_result) (\(_,_val10) -> (case _val10 of {TBool _val11 -> _val11; _ -> error "wrong type"})) (Map.lookup (0) fields)
  }
to_Check_result _ = error "not a struct"
read_Check_result :: (Transport t, Protocol p) => p t -> IO Check_result
read_Check_result iprot = to_Check_result <$> readVal iprot (T_STRUCT typemap_Check_result)
decode_Check_result :: (Protocol p, Transport t) => p t -> ByteString -> Check_result
decode_Check_result iprot bs = to_Check_result $ deserializeVal iprot (T_STRUCT typemap_Check_result) bs
typemap_Check_result :: TypeMap
typemap_Check_result = Map.fromList [("success",(0,T_BOOL))]
default_Check_result :: Check_result
default_Check_result = Check_result{
  check_result_success = False}
process_check (seqid, iprot, oprot, handler) = do
  args <- read_Check_args iprot
  (Control.Exception.catch
    (do
      val <- Iface.check handler (check_args_struct1 args)
      let res = default_Check_result{check_result_success = val}
      writeMessage oprot ("check", M_REPLY, seqid) $
        write_Check_result oprot res
      tFlush (getTransport oprot))
    ((\_ -> do
      writeMessage oprot ("check", M_EXCEPTION, seqid) $
        writeAppExn oprot (AppExn AE_UNKNOWN "")
      tFlush (getTransport oprot)) :: SomeException -> IO ()))
proc_ handler (iprot,oprot) (name,typ,seqid) = case name of
  "check" -> process_check (seqid,iprot,oprot,handler)
  _ -> My.Namespacing.Test.HsTestService.proc_ handler (iprot,oprot) (name,typ,seqid)
process handler (iprot, oprot) =
  readMessage iprot (proc_ handler (iprot,oprot)) >> return True
