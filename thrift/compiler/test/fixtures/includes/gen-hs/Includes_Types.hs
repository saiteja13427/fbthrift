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

module Includes_Types where
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


data Included = Included
  { included_MyIntField :: Int64
  } deriving (Show,Eq,Typeable)
instance Hashable Included where
  hashWithSalt salt record = salt   `hashWithSalt` included_MyIntField record  
instance Arbitrary Included where 
  arbitrary = liftM Included (arbitrary)
  shrink obj | obj == default_Included = []
             | otherwise = catMaybes
    [ if obj == default_Included{included_MyIntField = included_MyIntField obj} then Nothing else Just $ default_Included{included_MyIntField = included_MyIntField obj}
    ]
from_Included :: Included -> ThriftVal
from_Included record = TStruct $ Map.fromList $ catMaybes
  [ (\_v2 -> Just (1, ("MyIntField",TI64 _v2))) $ included_MyIntField record
  ]
write_Included :: (Protocol p, Transport t) => p t -> Included -> IO ()
write_Included oprot record = writeVal oprot $ from_Included record
encode_Included :: (Protocol p, Transport t) => p t -> Included -> ByteString
encode_Included oprot record = serializeVal oprot $ from_Included record
to_Included :: ThriftVal -> Included
to_Included (TStruct fields) = Included{
  included_MyIntField = maybe (included_MyIntField default_Included) (\(_,_val4) -> (case _val4 of {TI64 _val5 -> _val5; _ -> error "wrong type"})) (Map.lookup (1) fields)
  }
to_Included _ = error "not a struct"
read_Included :: (Transport t, Protocol p) => p t -> IO Included
read_Included iprot = to_Included <$> readVal iprot (T_STRUCT typemap_Included)
decode_Included :: (Protocol p, Transport t) => p t -> ByteString -> Included
decode_Included iprot bs = to_Included $ deserializeVal iprot (T_STRUCT typemap_Included) bs
typemap_Included :: TypeMap
typemap_Included = Map.fromList [("MyIntField",(1,T_I64))]
default_Included :: Included
default_Included = Included{
  included_MyIntField = 0}
